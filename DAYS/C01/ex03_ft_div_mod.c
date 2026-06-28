/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03_ft_div_mod.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 19:47:52 by cypher            #+#    #+#             */
/*   Updated: 2026/06/28 19:47:53 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b ;
    *mod = a % b ;
}

#include <stdio.h>

int main (void)
{
    int d;
    int m;

  ft_div_mod(20, 6, &d, &m);
  printf("div = %d , mode = %d\n" , d , m);
  return 0 ;
}