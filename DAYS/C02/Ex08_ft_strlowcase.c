/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ex08_ft_strlowcase.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 20:40:53 by cypher            #+#    #+#             */
/*   Updated: 2026/06/29 20:45:45 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
    int i ;

    i = 0;
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32 ;
        }
     i++;  
    }
    return str ;
}

#include <stdio.h>

int main (void)
{
    char str1[] = "HELLO";
ft_strlowcase(str1);
// "hello"

char str2[] = "42 ABC!";
ft_strlowcase(str2);
// "42 abc!"

char str3[] = "";
ft_strlowcase(str3);
// ""
}