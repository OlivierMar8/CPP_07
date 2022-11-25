/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test0701_04main.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmartin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:30:16 by olmartin          #+#    #+#             */
/*   Updated: 2022/11/25 14:31:56 by olmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

template< typename T>
void    iter( T * ptrT, size_t size, int a)
{
    for (size_t i = 0; i < size; i++ )
    {
        std::cout << ptrT[i] << std::endl;
		std::cout << "Fin de " << a << std::endl;
    }
}

int main( void ) {


    int *tab = new int[5];
    for ( int i = 0; i < 5; i++ )
        tab[i] = i;

    std::cout << tab[2] << std::endl;
    ::iter(tab, 5, 9 );
    return 0;
}
