//main.cpp	CPP07	ex02

#include <iostream>
#include <string>
#include "Array.hpp"

typedef struct s_struct {
	int	a;
	std::string str;
	s_struct & operator=( s_struct const & src) {
		this->a = src.a;
		this->str = src.str;
		return *this;
	}
}	t_struct;

	
int	main( void ) {

	Array<float>   tab_float(12);
	for (int i = 0; i < 12;i++)
	{
		tab_float[i] = 3.1f * i;
		std::cout << "tab_float[" << i << "] : " << tab_float[i] << std::endl;
	}
	Array<float>	tab2f(tab_float);
	tab_float[3] = 99.33f;
	std::cout << "Value [3] from tab_float: " << tab_float[3] << " , from tab2f: " << tab2f[3] << std::endl;
	
	try {
		tab_float[43] = 100.33f;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {	
		tab_float[-1] = 42.42f;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	Array<t_struct> struct_array(4);

	struct_array[2].a = 10;
	struct_array[1].str = "test";

	std::cout << struct_array[2].a << " -- " << struct_array[1].str << std::endl;

	Array<std::string> tab_string(2);
	tab_string[0] = struct_array[1].str;

	std::cout << tab_string[0] << std::endl;

	return 0;
}
