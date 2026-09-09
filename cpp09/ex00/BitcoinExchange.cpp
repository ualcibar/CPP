#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(std::string file)
{
	(void)file;
	database = init_database("data.csv", ',');
	input = init_database(file, '|');

    std::map<std::string, double>::iterator it;
    //for (it = database.begin(); it != database.end(); ++it) {
    //    std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    //}
	//for (it = input.begin(); it != input.end(); ++it) {
    //    std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    //}
}

void BitcoinExchange::calculatValue()
{
    std::map<std::string, double>::iterator it;
	for (it = input.begin(); it != input.end(); ++it)
	{
        //std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
		if (checkDate(it->first) == false)
			std::cout << "Error: bad input => " << it->first << std::endl;
		else if (it->second < 0)
			std::cout << "Error: not a positive number." << std::endl;
		else if (it->second > 1000)
			std::cout << "Error: too large a number." << std::endl;
		else
		{
			std::map<std::string, double>::const_iterator it1 = database.lower_bound(it->first);
			if (it1 == database.end())
				--it1;
			else if (it1->first != database.begin()->first)
				--it1;
			if (it->second*it1->second >= 0)
				std::cout << std::fixed << std::setprecision(2) << it->first << " => " << it->second << " = "  << it->second*it1->second << std::endl;
			else
				std::cout << "Error: not a positive number." << std::endl;
		}
    }
}

bool isNumeric(const std::string& str)
{
        bool result = false;
    try {
        // Attempt to convert the string
        // to a double using std::stod
        std::stod(str);
        // Conversion successful,
        // string can be converted to a double
        result = true;
    } catch (...) {
        // Conversion failed,
        // string cannot be converted to a double
    }
    return result;
};

//usar arry y no hacer el bucle y llamar 3 veces a get libe
bool BitcoinExchange::checkDate(std::string date)
{
	std::string strings[3];
	//std::vector<std::string> strings;
	std::stringstream f(date);
    std::string s;
	int day = 0;
	int month = 0;
	int year = 0;    

    getline(f, s, '-');
	strings[0] = s;
    getline(f, s, '-');
	strings[1] = s;
    getline(f, s, '-');
	strings[2] = s;
        //std::cout << s << std::endl;
		//strings.push_back(s);
	if (isNumeric(strings[0]) && isNumeric(strings[1]) && isNumeric(strings[2]))
	{
		day = std::stoi(strings[2]);
		month = std::stoi(strings[1]);
		year = std::stoi(strings[0]);
	}
	else
	{
		std::cout << "not numeric date" << std::endl;
		return(false);
	}
	if (checkDay(day, month, year) == true && checkMonth(month) == true && checkYear(year) == true)
		return (true);
	return(false);
}

bool BitcoinExchange::checkDay(int day, int month, int year)
{
	//std::cout << day << " " << month << " " << year << std::endl;
	if ((month == 2 && (year % 4) == 0) && (day <= 0 || day > 29))
		return (false);
	if (month == 2 && (day <= 0 || day > 28))
		return (false);
	if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day <= 0 || day >= 31))
		return (false);
	if ((month == 2 || month == 4 || month == 6 || month == 9 || month == 11) && (day <= 0 || day >= 30))
		return (false);
	return true;	
}

bool BitcoinExchange::checkMonth(int month)
{
	
	if (month > 0 && month <= 12)
		return(true);
	return false;
}

bool BitcoinExchange::checkYear(int year)
{
	if (year > 0)
		return(true);
	else 
		return false;
}

BitcoinExchange::~BitcoinExchange()

{

}

std::map<std::string, double> BitcoinExchange::init_database(std::string file, char separator)
{
	std::ifstream inputFile(file);
	std::map<std::string, double> myDatabase;
	std::string line;

	std::getline(inputFile, line);
	while (std::getline(inputFile, line))
	{
		std::istringstream ss(line);
		std::string date, exchangeRate;

		if (std::getline(ss, date, separator) && std::getline(ss, exchangeRate))
		{
			std::getline(ss, date, separator);
			std::getline(ss, exchangeRate);

			if (isNumeric(exchangeRate))
				myDatabase[date] = stod(exchangeRate);
		}
		else
			std::cerr << "Error parsing line: " << line << std::endl;
	}

	inputFile.close();
	return myDatabase;
	(void)file;
}
