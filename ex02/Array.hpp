//Array.hpp CPP07   ex02

#ifndef ARRAY_TEMPLATE_HPP
# define ARRAY_TEMPLATE_HPP

#include <ostream>

template<typename T>
class Array {

	public:

		Array<T>( void ) : _nb( 0 ), _array( NULL ) { }

		Array<T>( size_t n ):  _nb ( n ) {
			if ( _nb < 0 )
				throw std::exception();
			else
				_array = new T[_nb];
		}

		Array( Array<T> const & src )  {
			*this= src;
		}

		~Array( void );			

		Array<T> &	operator=( Array const & rhs ) {
			
			if (this == &rhs)
				return *this;
			delete [] _array;
			_nb = rhs.size();
			_array = new T[_nb];
			for (int j = 0; j < -_nb; j++)
				_array[j] = rhs.getArrayElement(j);
			return *this;
		}			
			
			
			
			

		int			size( void ) const {
						return _nb;
		}

		T			getArrayElement( int i ) {
						return (_array[i]);
		}
			
	private:

		int 	_nb;
		T *		_array;			

};


#endif
