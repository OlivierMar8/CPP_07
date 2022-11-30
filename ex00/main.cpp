//main.cpp	CPP07	ex00

#include <iostream>
#include "whatever.hpp"

int	main( void ) {

	int a = 2;
	int b = 3;

	::swap( a , b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl; 
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl; 

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap( c , d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl; 
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl; 

	return 0;
}

/*

int	main( void )
{
	int	a = 22;
	int b = 11;
	std::cout << "Valeur de a: " << a << " Valeur de b: " << b << std::endl;
	std::cout << "Valeur min: " << min( a, b ) << std::endl;
	std::cout << "Valeur max: " << max( a, b ) << std::endl;
	swap(a, b);
	std::cout << "Apres swap:" << std::endl;
	std::cout << "Valeur de a: " << a << " Valeur de b: " << b << std::endl;
	std::cout  << std::endl;

	float	c = 22.31;
	float	d = 11.78;
	std::cout << "Valeur de c: " << c << " Valeur de d: " << d << std::endl;
	std::cout << "Valeur min: " << min( c, d ) << std::endl;
	std::cout << "Valeur max: " << max( c, d ) << std::endl;
	swap(c, d);
	std::cout << "Apres swap:" << std::endl;
	std::cout << "Valeur de c: " << c << " Valeur de d: " << d << std::endl;
	std::cout  << std::endl;

	char	e = 'r';
	char	f = 'u';
	std::cout << "Valeur de e: '" << e << "'  Valeur de f: '" << f << "'" << std::endl;
	std::cout << "Valeur min: " << min( e, f ) << std::endl;
	std::cout << "Valeur max: " << max( e, f ) << std::endl;
	swap(e, f);
	std::cout << "Apres swap:" << std::endl;
	std::cout << "Valeur de e: '" << e << "'  Valeur de f: '" << f << "'" << std::endl;
	std::cout  << std::endl;

	return 0;
}
*/
