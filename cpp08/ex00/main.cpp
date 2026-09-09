#include "easyfind.hpp"

int main()
{
	/*vector*/
	std::cout << std::endl << "------- VECTOR -------" << std::endl << std::endl;
	std::vector<int> first;

	first.push_back(1); 
	first.push_back(2);
	first.push_back(3);
	first.push_back(4);
	first.push_back(5);
	first.push_back(6);

	std::cout << "result -> " << easyfind(first, 3) << std::endl;
	std::cout << "result -> " << easyfind(first, 5) << std::endl;
	std::cout << "result -> " << easyfind(first, 1) << std::endl;
	
	try
	{
		std::cout << "result -> " << easyfind(first, -1) << std::endl;
	}
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	/*list*/
	std::cout << std::endl << "------- LIST -------" << std::endl << std::endl;

	std::list<int> list;

	list.push_back(1); 
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);
	list.push_back(5);
	list.push_back(6);

	std::cout << "result -> " << easyfind(list, 3) << std::endl;
	std::cout << "result -> " << easyfind(list, 5) << std::endl;
	std::cout << "result -> " << easyfind(list, 1) << std::endl;
	
	try
	{
		std::cout << "result -> " << easyfind(list, -1) << std::endl;
	}
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	/*map*/
	std::cout << std::endl << "------- MAP -------" << std::endl << std::endl;

	std::map<int, int> map;

	map[1] = 1;
	map[2] = 2;
	map[3] = 3;
	map[4] = 4;
	map[5] = 5;
	map[6] = 6;

	std::cout << "result -> " << easyfind(list, 3) << std::endl;
	std::cout << "result -> " << easyfind(list, 5) << std::endl;
	std::cout << "result -> " << easyfind(list, 1) << std::endl;
	
	try
	{
		std::cout << "result -> " << easyfind(list, -1) << std::endl;
	}
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}