//main.cpp  CPP07   ex00

template< typename T >
void	swap( T & a, T & b ) {
	
	T	tmp = a;
		a = b;
		b = tmp;

		return;
}
	
template< typename T >
T	min( T & a, T & b ) {

		return (a < b ? a : b );
}
	
template< typename T >
T	max( T & a, T & b ) {

		return (a > b ? a : b );
}
