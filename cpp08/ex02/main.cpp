#include "MutantStack.hpp"

int main()
{
	std::cout << "------ MutantStack<int> ------" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top ->" << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size ->" << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::container_type::iterator it = mstack.begin();
	MutantStack<int>::container_type::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl << "------ stack ------" << std::endl;
	std::stack<int> s(mstack);
	std::cout << std::endl;
	//it = s.begin();
	//ite = s.end();
	std::cout << "top ->" << s.top() << std::endl;
	std::cout << "size ->" << s.size() << std::endl;

	std::cout << std::endl << "------ MutantStack<char> ------" << std::endl;
	
	MutantStack<char> charstack;
	charstack.push('h');
	charstack.push('o');
	std::cout << "top ->" << charstack.top() << std::endl;
	charstack.pop();
	std::cout << "size ->" << charstack.size() << std::endl;
	charstack.push('o');
	charstack.push('l');
	charstack.push('a');
	MutantStack<char>::container_type::iterator it1 = charstack.begin();
	MutantStack<char>::container_type::iterator ite1 = charstack.end();
	++it1;
	--it1;
	std::cout << std::endl;
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}
	std::cout << std::endl << "------ stack ------" << std::endl;
	std::stack<char> schar(charstack);
	std::cout << std::endl;
	//it1= schar.begin();
	//ite1 = schar.end();
	std::cout << "top ->" << schar.top() << std::endl;
	std::cout << "size ->" << schar.size() << std::endl;

	std::cout << std::endl << "------ MutantStack<std::string> ------" << std::endl;
	
	MutantStack<std::string> stringstack;
	stringstack.push("h");
	stringstack.push("o");
	std::cout << "top ->" << stringstack.top() << std::endl;
	stringstack.pop();
	std::cout << "size ->" << stringstack.size() << std::endl;
	stringstack.push("o");
	stringstack.push("l");
	stringstack.push("a");
	MutantStack<std::string>::container_type::iterator it2 = stringstack.begin();
	MutantStack<std::string>::container_type::iterator ite2 = stringstack.end();
	++ite2;
	--ite2;
	std::cout << std::endl;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::cout << std::endl << "------ stack ------" << std::endl;
	std::stack<std::string> sstring(stringstack);
	std::cout << std::endl;
	//it1= sstring.begin();
	//ite1 = sstring.end();
	std::cout << "top ->" << sstring.top() << std::endl;
	std::cout << "size ->" << sstring.size() << std::endl;
	return 0;
}