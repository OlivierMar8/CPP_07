/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test0701_06main.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmartin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:35:35 by olmartin          #+#    #+#             */
/*   Updated: 2022/11/25 15:28:31 by olmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void	print_value(int a) {
	std::cout << "test06: " << a << std::endl;
	
}

template< typename T>
void    iter( T * ptrT, size_t size, void(*p_func)(T))
{
    for (size_t i = 0; i < size; i++ )
    {
		p_func(ptrT[i]);
    }
}

int main( void ) {


    int *tab = new int[5];
    for ( int i = 0; i < 5; i++ )
        tab[i] = i;

    std::cout << tab[2] << std::endl;
    ::iter(tab, 5, &print_value );
    return 0;
}
