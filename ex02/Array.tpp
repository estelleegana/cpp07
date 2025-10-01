#pragma once
#include "Array.hpp"

template<typename T>
Array<T>::Array() : _size(0), _data(NULL)
{
	std::cout << bGREEN << "Constructor default Array created" << RESET << std::endl;
}

template<typename T>
Array<T>::Array(const int &n) : _size(n), _data(new T[n])
{
	std::cout << bGREEN << "Constructor(int &n) Array created" << RESET << " size : " << n << std::endl;
}

template<typename T>
Array<T>::Array(const Array &copy)
{
	_size = copy._size;
	_data =  new T[copy._size];
	for (unsigned int i = 0; i < _size; i++)
		_data[i] = copy._data[i];
	std::cout << bGREEN << "Constructor de recopie Array created" << RESET << " size : " << _size << std::endl;
}

template<typename T>
Array<T>::~Array()
{
	delete _data;
	std::cout << bRED << "Destructor" << RESET << std::endl;
}

template<typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= _size) {
		throw std::out_of_range("Index hors limites");
	}
	return _data[index];
}