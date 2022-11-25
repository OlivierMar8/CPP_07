/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test0701_01main.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmartin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:41:26 by olmartin          #+#    #+#             */
/*   Updated: 2022/11/25 13:49:20 by olmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

template< typename T>
void    iter( T * ptrT, int size)
{
    for (int i = 0; i < size; i++ )
    {
        std::cout << ptrT[i] << std::endl;
    }
}

int main( void ) {


    int *tab = new int[5];
    for ( int i = 0; i < 5; i++ )
        tab[i] = i;

    std::cout << tab[2];
//    ::iter(tab, 9, f_ptr);
    return 0;
}
