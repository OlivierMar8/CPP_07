//Array.hpp CPP07   ex02 test

#ifndef ARRAY_TEMPLATE_HPP
# define ARRAY_TEMPLATE_HPP

#include <ostream>
#include <exception>

class Array {

	public:

		Array( void ) : _nb( 0 ), _array( NULL ) { }

		Array( size_t n ):  _nb ( n ) {
		if ( _nb < 0 )
			throw std::exception();
		else
			_array = new int[_nb];
	}

	Array( Array const & src )  {
		*this= src;
	}

	~Array( void ) { };			

	Array &	operator=( Array const & rhs ) {
		
		if (this == &rhs)
			return *this;
		delete [] _array;
		_nb = rhs.size();
		_array = new int[_nb];
		for (int j = 0; j < -_nb; j++)
			_array[j] = rhs[j];
		return *this;
	}			
		
	int & operator[]( size_t i ) {
		if (i > static_cast<size_t>(_nb)) //template: ajouter test < 0
				throw std::exception();
			return _array[i];
		}
			
		const int & operator[]( size_t i ) const {
		try {
			if ( i > static_cast<size_t>(_nb))
				
				throw OutOfBoundsException();
			return _array[i];
		}
			catch (std::exception & e) {
				std::cout << "Error: index is out of bounds ! " << std::endl;
		}
}
			

		size_t			size( void ) const {
						return _nb;
		}

		class OutOfBoundsException : public std::exception {
			virtual const char * what() const throw() {
				return  "Error: index is out of bounds ! ";
			}
		}

	private:

		int 	_nb;
		int *	_array;			

};


#endif
