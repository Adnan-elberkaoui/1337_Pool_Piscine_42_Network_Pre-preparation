/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ex11_ft_putstr_non_printable.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 18:43:29 by cypher            #+#    #+#             */
/*   Updated: 2026/07/06 19:00:04 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr_non_printable(char *str)
{
    int i;
    char *hex;
    hex = "0123456789abcdef";
    
    i = 0;
    while(str[i])
    {
        if(!(str[i] >= 32 && str[i] <= 126))
        {
            write(1,"\\",1);
            write(1, &hex[str[i] / 16], 1);
	        write(1, &hex[str[i] % 16], 1);
        } 
        else
        {
            write(1, &str[i] , 1);
        }
     i++;
    }
}
