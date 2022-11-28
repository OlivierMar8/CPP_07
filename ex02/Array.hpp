//Array.hpp CPP07   ex02

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array {

	public:

		Array<T>( void ) : _nb( 0 ), _array( NULL ) { }

		Array<T>( unsigned int const n ):  _nb ( n ) {
			if ( _nb < 0 )
				throw std::exception();
			else
				_array = new T[_nb];
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

		Array<T> &	operator=( Array const & rhs ) {
			
			if (this == &rhs)
				return *this;
			delete [] _array;
			_nb = rhs.size();
			_array = new T[_nb];
			for (int j = 0; j < -_nb; j++)
				_array[j] = rhs[j];
			return *this;
		}			
			
		T & operator[]( size_t i ) {
			if (i < 0 || i > _nb)
				throw std::exception();
			return _array[i];
		}
			
		const T & operator[]( size_t i ) const {
			if (i < 0 || i > _nb)
				throw std::exception();
			return _array[i];
		}
			

		size_t			size( void ) const {
						return _nb;
		}

	/*	T			getArrayElement( int i ) {
						return (_array[i]);
		}
	*/		
	private:

		int 	_nb;
		T *		_array;			

};


#endif
