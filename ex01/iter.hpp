//main.cpp  CPP07   ex01

#include <iostream>
#include <string>

template< typename T >
void	iter( T * ptrT, size_t size, void(*p_func)(T))
{
	for (size_t i = 0; i < size; i++ )
	{	
		p_func( ptrT[i]);
	}
}

/*
template< typename T >
void	print_value( T const & a ) {

	std::cout << "The value is " << a << std::endl;
	return;
}
*/
