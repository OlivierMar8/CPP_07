//main.cpp  CPP07   ex00

#include <iostream>
#include "whatever.hpp"

class Tester {

	public:
		Tester( void ) : _n(0) { }
		Tester( int n ) : _n(n) { }
		Tester & operator= (Tester & a) { _n = a._n; return *this; }
		bool operator>( Tester const & rhs ) const  { return (this->_n > rhs._n); }
		bool operator<( Tester const & rhs ) const  { return (this->_n < rhs._n); }
		int getN() const { return _n; }

	private:

		int	_n;
};

std::ostream & operator<<( std::ostream & o, const Tester & t) { o << t.getN(); return o; }

int	main( void ) {

	Tester a(2), b(4);

	swap( a, b);
	std::cout << a << " " << b << std::endl;
	std::cout << max( a, b ) << std::endl;
	std::cout << min( a, b ) << std::endl;
	return 0;
}
