//main.cpp	CPP07	ex00

#include <iostream>
#include "whatever.hpp"

int	main( void )
{
	int	a = 22;
	int b = 11;
	std::cout << "Valeur de a: " << a << " Valeur de b: " << b << std::endl;
	swap(a, b);
	std::cout << "Valeur de a: " << a << " Valeur de b: " << b << std::endl;

	float	c = 22.31;
	float	d = 11.78;
	std::cout << "Valeur de c: " << c << " Valeur de d: " << d << std::endl;
	swap(c, d);
	std::cout << "Valeur de c: " << c << " Valeur de d: " << d << std::endl;

	char	e = 'r';
	char	f = 'u';
	std::cout << "Valeur de e: '" << e << "'  Valeur de f: '" << f << "'" << std::endl;
	swap(e, f);
	std::cout << "Valeur de e: '" << e << "'  Valeur de f: '" << f << "'" << std::endl;






	return 0;
}

