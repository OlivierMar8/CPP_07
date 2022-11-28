//main.cpp  CPP07   ex01

#include <iostream>
#include <string>

template< typename T >
void	iter( T * ptrT, size_t size, void(*p_func)(T const &))
{
	for (size_t i = 0; i < size; i++ )
	{	
		p_func( ptrT[i]);
	}
}
