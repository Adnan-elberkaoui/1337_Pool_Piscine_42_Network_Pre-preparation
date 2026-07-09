/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ex03_ft_sort_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 01:59:08 by cypher            #+#    #+#             */
/*   Updated: 2026/07/09 20:38:20 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strcmp(char *s1 , char *s2)
{
    int i;
    
    i = 0;
    while(s1[i] && s2[i] && s1[i] == s2[i] )
    {
       i++;
    }
    return s1[i] - s2[i];
}

void ft_swap(char *s1 , char *s2)
{
    char swap;
    swap = *s1;
    *s1 = *s2;
    *s2 = swap;
}

#include <unistd.h>

int main (int argc , char **argv)
{
    int i;
    int j;
    
    i = 1;
    while(i < argc - 1)
    {
        j = i + 1;
        while(j < argc)
        { 
            if(ft_strcmp(argv[i] ,argv[j]) > 0)
            {
                ft_swap(argv[i] , argv[j]);
            }
            j++;
        }
     
       i++;
    }
    
    i = 1;
    while(i < argc)
    {
        j = 0;
        while(argv[i][j])
        {
            write(1,&argv[i][j],1);
            j++;
        }
        write(1,"\n",1);
       i++; 
    }
}

