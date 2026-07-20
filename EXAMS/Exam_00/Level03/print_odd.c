/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_odd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 19:02:25 by cypher            #+#    #+#             */
/*   Updated: 2026/07/18 19:05:52 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================print_odd.txt=========================================
// Assignment name  : print_odd
// Expected files   : print_odd.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// create a program that only writes the character if the index its not multiple of 2.

// Example:

// ./a.out "FOR 42" | cat -e
// O 4$

// ==========================================================================================

#include <unistd.h>

int main (int argc , char **argv)
{
	int i;
	int j;
	
	i = 1;
	while(i < argc)
	{
		j = 0;
		while(argv[i][j])
		{
			if( j % 2 != 0)
			{
				write(1,&argv[i][j],1);
			}
			j++;
		}
		write(1,"\n",1);
		i++;
	}
	return 0;
}