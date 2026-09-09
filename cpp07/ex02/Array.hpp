#include <iostream>
#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T> class Array 
{
	private:
	    T* ptr;
		unsigned int size;
	
	public:
	   // Array(T arr[], int s);
		Array(unsigned int n);
		Array(const Array &src);
		Array();
		~Array();

	    void print();
		unsigned int get_size() const;

		Array <T>& operator=(const Array<T> & rhs);
		T& operator[](long int i);
		friend std::ostream& operator<<(std::ostream& os, const Array<T>& arr);
};
	
	template <typename T> Array<T>& Array<T>::operator=(const Array& rhs) 
	{
	    if (this == &rhs) 
	        return *this;
		if (size != 0)
			delete[] ptr;
	    size = rhs.size;
	    ptr = new T[size];
	    for (unsigned int i = 0; i < size; i++)
	        ptr[i] = rhs.ptr[i];
		return *this;
	}

	template <typename T> Array<T>::Array(unsigned int n)
	{
	    ptr = new T[n];
		size = n;
	}

	template <typename T> Array<T>::~Array()
	{
	    delete ptr;
	}

	template <typename T> Array<T>::Array(const Array &src)
	{
		size = 0;
	    *this = src;
	}

	template <typename T> Array<T>::Array()
	{
	    ptr = new T[0];
		size = 0;
	}

	template <typename T> void Array<T>::print()
	{
	    for (unsigned int i = 0; i < size; i++)
	        std::cout << " " << *(ptr + i);
	    std::cout << std::endl;
	}

	template <typename T> unsigned int Array<T>::get_size() const
	{
	    return size;
	}


	template <typename T> T& Array<T>::operator[](long int i)
	{
		if (i < 0 || (unsigned int)i > size)
		{
			throw std::out_of_range("out of range ");
		}
		return ptr[i];
	}

	template <typename T> std::ostream& operator<<(std::ostream& os, const Array<T>& arr) {
	    for (unsigned int i = 0; i < arr.size; ++i)
	        os << arr.ptr[i] << " ";
	    return os;
	}
	

#endif
