/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 19:47:54 by cypher            #+#    #+#             */
/*   Updated: 2026/06/28 19:47:55 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    int i ;
    i = 0 ;

    while(str[i])
    {
        i++;
    }
    return i;
}

#include <stdio.h>

int main (void)
{
    char s[] = "adnan";
    printf("%d\n",ft_strlen(s));
    return 0;
}