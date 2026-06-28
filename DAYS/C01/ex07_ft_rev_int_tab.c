/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07_ft_rev_int_tab.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 19:47:56 by cypher            #+#    #+#             */
/*   Updated: 2026/06/28 19:47:57 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i ;
    int j ;
    int temp ;
    j = size -1 ;
    i = 0 ;
    while(i < j)
    {
    temp = tab[i];
    tab[i] = tab[j];
    tab[j] = temp;
    j--;
    i++;
    }

}
