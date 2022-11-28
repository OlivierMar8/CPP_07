//main.cpp	CPP07	ex01

#include <iostream>
#include "iter.hpp"

template< typename T >
void    print_value( T a ) {

    std::cout << "The value is " << a << std::endl;
    return;
}


int	main( void ) {


	int	*tab = new int[5];
	for ( int i = 0; i < 5; i++ )
		tab[i] = i;

	iter<int>(tab, 5, &print_value);
	delete  [] tab;

	float *tab2 = new float[5];
	for ( int i = 0; i < 5; i++ )
		tab2[i] = i * 1.25f;

	iter<float>(tab2, 5, &print_value);
	delete  [] tab2;

	std::string *tab3 = new std::string[5];
		tab3[0] = "Le debut";
		tab3[1] = "du test";
		tab3[2] = "de l'exercice";
		tab3[3] = "01 du module";
		tab3[4] = "CPP 07 template.";

	iter<std::string>(tab3, 5, &print_value);
	delete  [] tab3;

	return 0;
}
