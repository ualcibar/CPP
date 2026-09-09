#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{

	if (argc > 2)
	{
		std::cout << "only one argument" << std::cout;
		return (0);
	}

	std::ifstream inputFile(argv[1]);
	if (!inputFile)
	{
		std::cerr << "Error opening the file." << std::endl;
		inputFile.close();
		return (0);
	}
	inputFile.close();

	try{
		BitcoinExchange bitcoin(argv[1]);
		bitcoin.calculatValue();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
