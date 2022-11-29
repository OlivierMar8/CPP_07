//Array.hpp CPP07   ex02

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>

template<typename T>
class Array {

	public:

		Array<T>( void ) : _nb( 0 ), _array( NULL ) { }

		Array<T>( unsigned int const n ):  _nb ( n ) {
	/*		if ( _nb < 0 )
				throw std::exception();
			else
	*/			_array = new T[_nb];
		}
//ok
		Array<T>( Array<T> const & src )  {
			*this= src;
		}
//ok
		~Array<T>( void ) {
			if (_nb > 0)
				delete [] _array;
		}			
//ok
		Array<T> &	operator=( Array<T> const & rhs ) {
			
			if (this == &rhs)
				return *this;
			if (_nb > 0)
				delete [] _array;
			_nb = rhs.size();
			_array = new T[_nb];
			for (unsigned int i = 0; i < _nb; i++)
				_array[i] = rhs[i];
			return *this;
		}			
//ok		
		T & operator[]( int const i ) {
			if (i > static_cast<int>(_nb) || i < 0)
				throw std::out_of_range("Error: out of bounds index");
			return _array[i];
		}
			
		const T & operator[]( int const i ) const {
			if (i > static_cast<int>(_nb) || i < 0)
				throw std::out_of_range("Error: out of bounds index");
			return _array[i];
		}
			

		int			size( void ) const {
						return _nb;
		}

	private:

		unsigned int 	_nb;
		T *				_array;			

};


#endif
