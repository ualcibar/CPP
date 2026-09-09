#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
#include <list>
#include <map>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <string_view>


#ifndef SPAN_HPP
#define SPAN_HPP

//class NotFoundException : public std::exception {
//    const std::string getMessage() const {
//        return std::string("Not found");
//    }
//};

class Span 
{
	private:
		unsigned int N;
		std::vector<int> numbers;
	
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &src);

		void addNumber(int i);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		int shortestSpan();
		int longestSpan();

		Span& operator=(const Span & rhs);

		unsigned int getN() const;
		std::vector<int> getNumbers() const;
};

std::ostream & operator<<(std::ostream & os, Span & dt);

#endif