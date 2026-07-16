/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 02:27:18 by cypher            #+#    #+#             */
/*   Updated: 2026/07/15 03:28:27 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

int main (int argc , char **argv)
{
	int i;
	int j;
	char s;
	if(argc != 2)
	{
		write(1,"\n",1);
	}
	
	i = 0;
	while(argv[1][i])
	{
		s = argv[1][i];
		if(s >= 'a' && s <= 'z')
		{
			j = 0;
			while(j <= s - 97)
			{
				write(1,&s,1);
				j++;
			}
		}
		else if(s >= 'A' && s <= 'Z')
		{
			j = 0;
			while(j <= s - 65)
			{
				write(1,&s,1);
				j++;
			}
		}
		else
		{
			write(1,&s,1);
		}
	i++;
	}
}