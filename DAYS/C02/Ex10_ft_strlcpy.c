/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ex10_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 12:40:13 by cypher            #+#    #+#             */
/*   Updated: 2026/07/06 18:38:25 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{    
    int i;
    int j;

    j = 0 ;
    while(src[j])
    {
        j++;
    }

    if(size == 0)
    {
        return j;
    }

    i = 0;
    while(src[i] && i < size - 1)
    {
            dest[i] = src[i];
            i++;
    }

    dest[i] = '\0';

    return j;
}

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
    char src[] = "Hello World!";
    char dest[5];
    unsigned int len;

    len = ft_strlcpy(dest, src, sizeof(dest));

    printf("src    : %s\n", src);
    printf("dest   : %s\n", dest);
    printf("return : %u\n", len);

    return (0);
}