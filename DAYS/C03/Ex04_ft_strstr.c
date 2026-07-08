/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ex04_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 16:41:19 by cypher            #+#    #+#             */
/*   Updated: 2026/07/08 17:21:16 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    
    if(to_find[0] == '\0')
    {
        return str;
    }
    
    i = 0;
    while(str[i])
    {
        j = 0;
        while (to_find[j] && str[i + j] == to_find[j])
        {
          j++;
        }
        if(to_find[j] == '\0')
        {
            return &str[i];
        }
      i++;  
    }
    return NULL ;
}
