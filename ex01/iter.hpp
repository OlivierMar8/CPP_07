//main.cpp  CPP07   ex01

#include <iostream>
#include <string>

template< typename T >
void	iter( const T * ptrT, const int size, void(*f_ptr)(const T &x, int i))
{
	for (int i = 0; i < size; i++ )
	{	
		f_ptr( ptrT[i], i);
	}
}


template< typename T >
void	print_value( T t ) {

	std::cout << "The value is " << t << std::endl;
	return;
}

