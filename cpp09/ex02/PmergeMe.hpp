#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <sstream>
#include <exception>
#include <fstream>
#include <string>

class PmergeMe
{
	public:
		PmergeMe & operator=(const PmergeMe & rhs);
		PmergeMe(std::string flie);
		PmergeMe();
		~PmergeMe();
		void insertShortVecotr(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &last);
		void mergeShortVecotr(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &last);
		void insertShortDeque(const std::deque<int>::iterator &begin, const std::deque<int>::iterator &last);
		void mergeShortDeque(const std::deque<int>::iterator &begin, const std::deque<int>::iterator &last);
		
		std::vector<int> input;
		std::deque<int>	dequeList;
	
	private:
		
		
		
};

//std::ostream & operator<<(std::ostream & os, PmergeMe & dt);

//bool isNumeric(const std::string& str);

#endif
