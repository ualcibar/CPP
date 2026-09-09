#include "Span.hpp"

Span::Span()
{

}

Span::Span(unsigned int N)
{
	this->N = N;
}

Span::Span(const Span &src)
{
	*this = src;
}

void Span::addNumber(int i)
{
	if(numbers.size() == N)
		throw std::runtime_error("The vector if already full");;
	numbers.push_back(i);
}
void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator it = begin; it != end; ++it)
	{
        if(numbers.size() == N)
			throw std::runtime_error("The vector if already full");
		numbers.push_back(*it);
    }
}

unsigned int Span::getN() const
{
	return(N);
}

std::vector<int> Span::getNumbers() const
{
	return(numbers);
}

int Span::shortestSpan()
{
	std::vector<int> diff(numbers.size());
	
	if(numbers.size() <= 1)
		throw std::runtime_error("The vector has one or fewer elements.");
	adjacent_difference(numbers.begin() + 1, numbers.end(), diff.begin());
	diff.pop_back();
	for (size_t i = 0; i < diff.size(); ++i)
	{	
		//std::cout << diff[i] << " " << abs(diff[i]) << std::endl;
		diff[i] = abs(diff[i]); 
    }
	//std::cout << diff[0] << std::endl;
	return (*std::min_element(diff.begin(), diff.end()));
}

int Span::longestSpan()
{
	std::vector<int> diff(numbers.size());
	
	if(numbers.size() <= 1)
		throw std::runtime_error("The vector has one or fewer elements.");
	adjacent_difference(numbers.begin(), numbers.end(), diff.begin());
	for (size_t i = 0; i < diff.size(); ++i)
	{
        diff[i] = abs(diff[i]); 
    }
	return (*std::max_element(diff.begin(), diff.end()));
}

Span& Span::operator=(const Span& rhs) 
{
    if (this == &rhs) 
        return *this;

    N = rhs.N;
    numbers = rhs.numbers;
	return *this;
}

std::ostream & operator<<(std::ostream & os, Span & dt)
{
	os << "Size of stack ->" << dt.getN() << std::endl;
	for (size_t i = 0; i < dt.getN(); ++i)
	{
        os << i << " -> " << dt.getNumbers()[i] << std::endl;
    }
	return (os);
}
