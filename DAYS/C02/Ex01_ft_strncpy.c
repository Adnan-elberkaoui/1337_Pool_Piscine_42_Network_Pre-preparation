/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ex01_ft_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:11:31 by cypher            #+#    #+#             */
/*   Updated: 2026/06/29 17:12:34 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i ;
    i = 0 ;

    while(src[i] && i < n)
    {
            dest[i] = src[i];
     i++;
    }
    
    while(i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return dest ;
}

#include <stdio.h>

int main(void)
{
    char src[] = "Hello World";
    char dest[20];

    ft_strncpy(dest, src, 15);

    printf("src  = %s\n", src);
    printf("dest = %s\n", dest);

    return (0);
}