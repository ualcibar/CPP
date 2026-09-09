#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <vector>
#include <sstream>
#include <exception>
#include <fstream>
#include <map>
#include <string>
#include <time.h>

class BitcoinExchange
{
	public:
		BitcoinExchange & operator=(const BitcoinExchange & rhs);
		BitcoinExchange(std::string flie);
		BitcoinExchange();
		~BitcoinExchange();

		void calculatValue();
	
	private:
		std::map<std::string, double> database;
		std::map<std::string, double> input;

		std::map<std::string, double> init_database(std::string file, char separator);

		bool checkDate(std::string date);
		bool checkDay(int day, int month, int year);
		bool checkMonth(int month);
		bool checkYear(int year);

		
};

//std::ostream & operator<<(std::ostream & os, BitcoinExchange & dt);

bool isNumeric(const std::string& str);

#endif
