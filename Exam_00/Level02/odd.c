/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   odd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 18:38:56 by cypher            #+#    #+#             */
/*   Updated: 2026/07/18 18:41:22 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : odd
// Expected files   : odd.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program That displays odd numbers, followed by a new line.

// Example:

// $> ./odd 
// 13579
// $> ./odd | cat -e
// 13579$
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
	while(i <= 9)
	{
		if( i % 2 != 0 )
		{
			ft_putchar(i + '0');
		}
		i++;
	}
	write(1,"\n",1);
	return 0;
}