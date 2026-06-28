/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08_ft_sort_int_tab.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 19:47:59 by cypher            #+#    #+#             */
/*   Updated: 2026/06/28 19:48:00 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_int_tab(int *tab, int size)
{
    int i ;
    int j ;
    int temp ;
    j = 0 ;
    i = 0 ;

    while(i < size)
    {
        j = i + 1 ;
        while( j < size)
        {
        if(tab[i] > tab[j])
        {
            temp = tab[j];
            tab[j] = tab[i];
            tab[i] = temp;
        }
        j++;
        }
      i++;  
    }
}
