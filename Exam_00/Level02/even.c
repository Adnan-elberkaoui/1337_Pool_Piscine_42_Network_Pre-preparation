/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   even.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 18:22:44 by cypher            #+#    #+#             */
/*   Updated: 2026/07/18 18:30:04 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : even
// Expected files   : even.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program That displays  even numbers, followed by a new line.

// Example:

// $> ./even
// 0246810
// $> ./even | cat -e
// 0246810$
// ==========================================================================================

#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

int main (void)
{
	int i;

	i = 0;
	while(i <= 10)
	{
		if(i % 2 == 0)
		{
			if(i > 9)
			{
			ft_putchar(i / 10 + '0');
			ft_putchar(i % 10 + '0');
			}
			else
			{
			ft_putchar(i + '0');
			}
		}
		i++;
	}
	ft_putchar('\n');
	return 0;
}