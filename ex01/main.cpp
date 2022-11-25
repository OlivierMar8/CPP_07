//main.cpp	CPP07	ex01

#include <iostream>
#include "iter.hpp"

template< typename T >
void    print_value( T to_print, int i ) {

    std::cout << "The value " << i << " is " << to_print << std::endl;
    return;
}

int	main( void ) {

	void(*f_ptr)(int, int) = &print_value;

	int	*tab = new int[5];
	for ( int i = 0; i < 5; i++ )
		tab[i] = i;

	std::cout << tab[6];
	iter(tab, 9, f_ptr);
	return 0;
}
