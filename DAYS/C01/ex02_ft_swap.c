/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02_ft_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 19:47:48 by cypher            #+#    #+#             */
/*   Updated: 2026/06/28 19:47:49 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b)
{
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
}

#include <stdio.h>

int main (void)
{
    int a = 10;
    int b = 15;

    ft_swap(&a, &b);
    
    printf("a:%d  b:%d\n" ,a,b);
    return 0 ;
}
