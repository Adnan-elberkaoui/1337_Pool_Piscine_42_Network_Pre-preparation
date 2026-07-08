/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ex05_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 17:26:55 by cypher            #+#    #+#             */
/*   Updated: 2026/07/08 18:02:22 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int i;
    int j;
    int x;  

    i = 0;
    while(dest[i])
    {
        i++;
    }
    
    j = 0;
    while(src[j])
    {
        j++;
    }
    
    if (size <= i)
    return size + j;

    x = 0;
    while(src[x] && i + x < size - 1)
    {
        dest[i + x] = src[x];
        x++;
    }
    dest[i + x] = '\0';
    
    return i + j;
}