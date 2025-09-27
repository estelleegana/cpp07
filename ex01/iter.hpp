#pragma once

#include <iostream>

template<typename T, typename F>
void iter(T *addr, int len, F function)
{
	for (int i = 0; i < len; i++)
		function(addr[i]);
}