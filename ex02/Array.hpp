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
		//constructeur sans parametre
		Array();

		//constructeur(unsigned int n)
		Array(const int &n);

		//constructeur de recopie et operateur d'affiliation
		Array(const Array &copy);
		Array &operator=(const Array &autre);

		//destructeur
		~Array();

		//fonction membre
		unsigned int size();

		//operateur d'affiliation []
		T& operator[](unsigned int index);
};