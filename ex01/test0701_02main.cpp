/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test0701_02main.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmartin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:29:52 by olmartin          #+#    #+#             */
/*   Updated: 2022/11/25 14:29:54 by olmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

template< typename T>
void    iter( T * ptrT)
{
    for (int i = 0; i < 5; i++ )
    {
        std::cout << ptrT[i] << std::endl;
    }
}

int main( void ) {


    int *tab = new int[5];
    for ( int i = 0; i < 5; i++ )
        tab[i] = i;

    std::cout << tab[2] << std::endl;
    ::iter(tab);
    return 0;
}
