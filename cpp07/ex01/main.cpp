
// C++ Program to demonstrate
// Use of template
#include <iostream>
using namespace std;
 
// One function works for all data types.  This would work
// even for user defined types if operator '>' is overloaded

template <typename T> void iter(T *array, size_t size, void (*funct)(const T &))
{
	for (size_t i = 0; i < size; i++)
	{
		if (array)
			funct(array[i]);
	}
}

template <typename T> int len(T &str)
{
	int i = 0;
	while (str)
		i++;
	return i;
}

template< typename T > void print( T const & x )
{
	std::cout << x << std::endl;
	return;
}


int main()
{
	/* -- stirng -- */
	std::cout << "string:" << std::endl;
	std::string test[4] = {"a", "aa", "aaa", "aaaa"};
	iter<std::string>(test, 4, print);
	std::cout << std::endl;
	/* -- int -- */
	std::cout << "int:" << std::endl;
	int test1[4] = {1, 2, 3, 4};
	iter<int>(test1, 4, print);
	std::cout << std::endl;
	/* -- float -- */
	std::cout << "float:" << std::endl;
	float test2[4] = {1, 2, 3, 4};
	iter<float>(test2, 4, print);
	std::cout << std::endl;
	/* -- double -- */
	std::cout << "double:" << std::endl;
	float test3[4] = {1.01, 2.02, 3.03, 4.04};
	iter<float>(test3, 4, print);
    return 0;
}
