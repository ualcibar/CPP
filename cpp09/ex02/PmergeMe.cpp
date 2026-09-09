#include "PmergeMe.hpp"
#include <algorithm>

	PmergeMe & PmergeMe::operator=(const PmergeMe & rhs)
	{
		input = rhs.input;
		dequeList = rhs.dequeList;
		return (*this);
	}

	PmergeMe::PmergeMe()
	{

	}

	PmergeMe::~PmergeMe()
	{

	}

	void PmergeMe::insertShortVecotr(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &last)
	{
        for (std::vector<int>::iterator it = begin; it != last; ++it)
		{
			if (it != begin)
			{
        		std::vector<int>::iterator jt = it - 1;
				int key = *it;

        		while (1)
				{
					if (key <= *jt)
						std::iter_swap(std::find(begin, last, *jt), std::find(begin, last, key));
					if (jt == begin)
						break;
        		    --jt;	
        		}
			}
		}
	}

	void PmergeMe::mergeShortVecotr(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &last)
	{
		std::vector<std::vector<int> > vectorOfVectors;
		std::vector<int>::iterator it = begin;
		std::vector<int>::iterator begin1 = begin;	

		while(it != last)
		{
			begin1 = it;
			int i = 0;
			while(i < 20 && it != last)
			{				it++;
				i++;
			}
			std::vector<int> newVector(begin1, it);
			vectorOfVectors.push_back(newVector);
		}
		//for (std::vector<std::vector<int> >::iterator it = vectorOfVectors.begin(); it != vectorOfVectors.end(); ++it)
		//{
		//	std::cout << "->";
        //	for (std::vector<int>::iterator innerIt = it->begin(); innerIt != it->end(); ++innerIt)
		//	{
        //    	std::cout << *innerIt << " ";
        //	}
        //	std::cout << std::endl;
    	//}
		if (vectorOfVectors.size() == 1) 
		{
			for (std::vector<std::vector<int> >::iterator innerIt = vectorOfVectors.begin(); innerIt != vectorOfVectors.end(); ++innerIt)
			{
            	insertShortVecotr(innerIt->begin(), innerIt->end());
        	}
		}
		while(vectorOfVectors.size() != 1) 
		{
			for (std::vector<std::vector<int> >::iterator innerIt = vectorOfVectors.begin(); innerIt != vectorOfVectors.end(); ++innerIt)
			{
            	insertShortVecotr(innerIt->begin(), innerIt->end());
        	}
			std::vector<std::vector<int> > innerItAux;
			for (std::vector<std::vector<int> >::iterator innerIt = vectorOfVectors.begin(); innerIt != vectorOfVectors.end(); innerIt = innerIt + 2)
			{
				std::vector<int> vector1 = *innerIt;
				if((innerIt + 1) == vectorOfVectors.end())
				{
					insertShortVecotr(vector1.begin(), vector1.end());
					innerItAux.push_back(vector1);
					break;
				}
				std::vector<int> vector2 = *(innerIt + 1);

				for (std::vector<int>::iterator it = vector2.begin(); it != vector2.end(); ++it) {
        			vector1.push_back(*it);
    			}
				//std::cout << "vector1";
				//for (std::vector<int>::iterator innerIt1 = vector1.begin(); innerIt1 != vector1.end(); ++innerIt1)
				//{
            	//	std::cout << *innerIt1 << " ";
        		//}
				insertShortVecotr(vector1.begin(), vector1.end());
				innerItAux.push_back(vector1);
        	}
			vectorOfVectors = innerItAux;
		}
		//std::cout << "---------" << std::endl;
		//for (std::vector<std::vector<int> >::iterator it = vectorOfVectors.begin(); it != vectorOfVectors.end(); ++it)
		//{
		//	std::cout << "->";
        //	for (std::vector<int>::iterator innerIt = it->begin(); innerIt != it->end(); ++innerIt)
		//	{
        //    	std::cout << *innerIt << " ";
        //	}
        //	std::cout << std::endl;
    	//}
		input = vectorOfVectors[0];
	}


	void PmergeMe::insertShortDeque(const std::deque<int>::iterator &begin, const std::deque<int>::iterator &last)
	{
        for (std::deque<int>::iterator it = begin; it != last; ++it)
		{
			if (it != begin)
			{
        		std::deque<int>::iterator jt = it - 1;
				int key = *it;

        		while (1)
				{
					if (key < *jt)
						std::iter_swap(std::find(begin, last, *jt), std::find(begin, last, key));
					if (jt == begin)
						break;
        		    --jt;	
        		}
			}
		}
	}

	void PmergeMe::mergeShortDeque(const std::deque<int>::iterator &begin, const std::deque<int>::iterator &last)
	{
		std::deque<std::deque<int> > vectorOfVectors;
		std::deque<int>::iterator it = begin;
		std::deque<int>::iterator begin1 = begin;	

		while(it != last)
		{
			begin1 = it;
			int i = 0;
			while(i < 16 && it != last)
			{
				it++;
				i++;
			}
			std::deque<int> newVector(begin1, it);
			vectorOfVectors.push_back(newVector);
		}
		if (vectorOfVectors.size() == 1) 
		{
			for (std::deque<std::deque<int> >::iterator innerIt = vectorOfVectors.begin(); innerIt != vectorOfVectors.end(); ++innerIt)
			{
            	insertShortDeque(innerIt->begin(), innerIt->end());
        	}
		}
		while(vectorOfVectors.size() != 1) 
		{
			for (std::deque<std::deque<int> >::iterator innerIt = vectorOfVectors.begin(); innerIt != vectorOfVectors.end(); ++innerIt)
			{
            	insertShortDeque(innerIt->begin(), innerIt->end());
        	}
			std::deque<std::deque<int> > innerItAux;
			for (std::deque<std::deque<int> >::iterator innerIt = vectorOfVectors.begin(); innerIt != vectorOfVectors.end(); innerIt = innerIt + 2)
			{
				std::deque<int> vector1 = *innerIt;
				if((innerIt + 1) == vectorOfVectors.end())
				{
					insertShortDeque(vector1.begin(), vector1.end());
					innerItAux.push_back(vector1);
					break;
				}
				std::deque<int> vector2 = *(innerIt + 1);

				for (std::deque<int>::iterator it = vector2.begin(); it != vector2.end(); ++it) {
        			vector1.push_back(*it);
    			}
				//std::cout << "vector1";
				//for (std::vector<int>::iterator innerIt1 = vector1.begin(); innerIt1 != vector1.end(); ++innerIt1)
				//{
            	//	std::cout << *innerIt1 << " ";
        		//}
				insertShortDeque(vector1.begin(), vector1.end());
				innerItAux.push_back(vector1);
        	}
			vectorOfVectors = innerItAux;
		}
		//std::cout << "---------" << std::endl;
		//for (std::vector<std::vector<int> >::iterator it = vectorOfVectors.begin(); it != vectorOfVectors.end(); ++it)
		//{
		//	std::cout << "->";
        //	for (std::vector<int>::iterator innerIt = it->begin(); innerIt != it->end(); ++innerIt)
		//	{
        //    	std::cout << *innerIt << " ";
        //	}
        //	std::cout << std::endl;
    	//}
		dequeList = vectorOfVectors[0];
	}
