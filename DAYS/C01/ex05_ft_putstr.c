/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05_ft_putstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 19:48:32 by cypher            #+#    #+#             */
/*   Updated: 2026/06/28 19:48:33 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
    int i ; 
    i = 0 ;

    while(str[i])
    {
        write(1,&str[i],1);
        i++;
    }
    write(1,"\n",1);
}

int main (void)
{
    char s[] = "adnan";
    ft_putstr(s);
    return 0 ;
}