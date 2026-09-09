
#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
#include <list>
#include <map>


#ifndef EASYFIND_HPP
#define EASYFIND_HPP



template <typename T> int easyfind(T& cont, int i)
{
	//std::cout << *(std::find( cont.begin(), cont.end(), i)) << std::endl;
	int result = *(std::find( cont.begin(), cont.end(), i));
	if ( std::find( cont.begin(), cont.end(), i) != cont.end() )
	{
		return result;
	}
	else
        throw std::runtime_error("Element not found");;
}

#endif