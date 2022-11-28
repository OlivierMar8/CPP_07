//main.cpp	CPP07	ex02

#include <iostream>
#include "testArray.hpp"

int	main( void ) {

	int * a = new int;
//	std::cout << a.size() std::endl;
	float * f = new float(12);
	(void)a;
	f[2] = 1.05f;
	try {
		std::cout << f[30] << " autre: " << f[2] << std::endl;
	}
	catch (std::exception & e) {
		std::cout <<e.what() << std::endl;
	}
	
	return 0;
}
