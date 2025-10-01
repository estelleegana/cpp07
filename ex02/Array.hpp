#pragma once

#define bGREEN "\e[1;32m"
#define bRED "\e[1;31m"
#define RESET "\e[0m"

template<typename T>
class Array
{
	private:
		unsigned int _size;
		T *_data;
	public:
		Array();
		Array(const int &n);
		Array(const Array &copy);
		// Array	
		~Array();
		T& operator[](unsigned int index);
};