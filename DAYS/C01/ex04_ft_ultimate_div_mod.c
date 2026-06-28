/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04_ft_ultimate_div_mod.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 19:47:50 by cypher            #+#    #+#             */
/*   Updated: 2026/06/28 19:47:51 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_div_mod(int *a, int *b)
{
     int swap ;
     swap = *a ;
     *a = swap / *b ;
     *b = swap % *b ;
}


#include <stdio.h>

int main (void)
{
    int x = 20;
    int y = 6;

  ft_ultimate_div_mod(&x, &y);
  printf("div = %d , mode = %d\n" , x , y);
  return 0 ;
}