//main.cpp	CPP07	ex02

#include <iostream>
#include "Array.hpp"

int	main( void ) {

	int *  = new ;
	float * f = new float(12);
	try {
	f[2] = 1.05f;
	std::cout << f[20] << " autre: " << f[2] << std::endl;
	}
	catch ( std::exception & e) {
		std::cout << "Out of bound index ! " << std::endl;
	}
	return 0;
}
