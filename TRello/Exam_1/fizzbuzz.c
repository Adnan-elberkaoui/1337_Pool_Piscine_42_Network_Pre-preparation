/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 22:01:01 by cypher            #+#    #+#             */
/*   Updated: 2026/07/15 22:13:01 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

int main (void)
{
	int i;
	
	i = 1;
	while(i <= 100)
	{
		if(i % 3 == 0 && i % 5 == 0)
		{
			write(1,"fizzbuzz",8);
		}
		else if(i % 3 == 0)
		{
			write(1,"fizz",4);
		}
		else if(i % 5 == 0)
		{
			write(1,"buzz",4);
		}
		else
		{
			if(i > 9)
			{
				ft_putchar(i / 10 + '0');
				ft_putchar(i % 10 + '0');
			}
			else
				ft_putchar(i + '0');
		}
		write(1,"\n",1);
	 i++;
	}
	return 0;
}