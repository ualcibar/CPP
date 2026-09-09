#ifndef ScalarConverter_HPP
#define ScalarConverter_HPP

#include <iostream>

class ScalarConverter
{
	public:
		ScalarConverter & operator=(const ScalarConverter & rhs);
		static int  convert(char *num);
	private:
		
		ScalarConverter(void);
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &src);
		
};

std::ostream & operator<<(std::ostream & os, ScalarConverter & dt);

#endif
