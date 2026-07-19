/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_even.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 18:43:20 by cypher            #+#    #+#             */
/*   Updated: 2026/07/18 18:58:26 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : print_even
// Expected files   : print_even.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// create a program that only writes the character if the index its on in is a multiple of 2.

// ./a.out "FOR 42" | cat -e
// FR4$

#include <unistd.h>

int main (int argc , char **argv)
{
	int i;
	int j;
	char s;
	
	i = 1;
	while(i < argc)
	{
		j = 0;
		while(argv[i][j])
		{
			s = argv[i][j];
			if (j % 2 == 0)
			{
				write(1,&s,1);
			}
			j++;
		}
		write(1,"\n",1);
		i++;
	}
	return 0;
}