#pragma once
#include "Array.hpp"

//constructeur sans parametre
template<typename T>
Array<T>::Array() : _size(0), _data(NULL)
{
	std::cout << bGREEN << "Array - Constructor default " << RESET << std::endl;
}


//constructeur(unsigned int n)
template<typename T>
Array<T>::Array(const int &n) : _size(n), _data(new T[n])
{
	std::cout << bGREEN << "Array - Constructor " << RESET << " size : " << n << std::endl;
}

//constructeur de recopie et operateur d'affiliation=
template<typename T>
Array<T>::Array(const Array &copy) : _size(copy._size), _data(new T[copy._size])
{
	for (unsigned int i = 0; i < _size; i++)
		_data[i] = copy._data[i];
	std::cout << bGREEN << "Array - Constructor copy " << RESET << " size : " << _size << std::endl;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &autre)
{
	delete[] _data;

	_size = autre._size;
	_data = new T[autre._size];
	for (unsigned int i = 0; i < _size; i++)
		_data[i] = autre._data[i];
	return (*this);
}

//destructeur
template<typename T>
Array<T>::~Array()
{
	delete[] _data;
	std::cout << bRED << "Array - Destructor" << RESET << std::endl;
}

//fonction membre size() : renvoie le nombre d'elem dans le _data[]
template<typename T>
unsigned int Array<T>::size()
{
	return _size;
}






//operateur d'affiliation []
template<typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= _size) {
		throw std::out_of_range("Index hors limites");
	}
	return _data[index];
}

