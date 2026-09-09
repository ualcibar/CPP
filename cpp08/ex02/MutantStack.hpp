#include <iostream>
#include <vector>
#include <stack>


#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

//class NotFoundException : public std::exception {
//    const std::string getMessage() const {
//        return std::string("Not found");
//    }
//};

template <typename T> class MutantStack : public std::stack<T> 
{
	private:
		//std::stack<int > stack;
	
	public:
		MutantStack();
		MutantStack(const MutantStack &src);

		MutantStack<T>& operator=(const MutantStack<T> & rhs);

		typename MutantStack<T>::container_type::iterator begin();
		typename MutantStack<T>::container_type::iterator end();

};

template <typename T> MutantStack<T>::MutantStack()
{

}

template <typename T> MutantStack<T>::MutantStack(const MutantStack &src)
{
	*this = src;
}

template <typename T> MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T> & rhs)
{
    if (this == &rhs) 
        return *this;

    //stack = rhs.stack;
	return *this;
}

template <typename T> typename MutantStack<T>::container_type::iterator MutantStack<T>::begin()
{
		return (this->c.begin());
}

template <typename T> typename MutantStack<T>::container_type::iterator MutantStack<T>::end()
{
		return (this->c.end());
}

#endif