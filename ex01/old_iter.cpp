//main.cpp  CPP07   ex01
/*	OK OK
template< typename T >
void	iter( T * ptrT, int size)
{
	for (int i = 0; i < size; i++ )
	{	
		std::cout << ptrT[i] << std::endl;	
	}
}
*/

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

/*
template< typename T >
void	print_value( T to_print, int i ) {

	std::cout << "The value " << i << " is " << to_print << std::endl;
	return;
}
*/
