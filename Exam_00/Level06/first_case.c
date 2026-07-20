/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_case.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 22:09:28 by cypher            #+#    #+#             */
/*   Updated: 2026/07/19 00:30:41 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : first_case
// Expected files   : first_case.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes one string as argument.

// The program must print the string with all alphabetic characters converted to
// lowercase, except:

// - The first alphabetic character of the string must be uppercase.
// - All other alphabetic characters must be lowercase.
// - Numbers and non-alphabetic characters must not be modified.

// The output must be followed by a '\n'.

// If the number of arguments is not exactly one, the program displays only '\n'.

// ==========================================================================================

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	first;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	first = 1;
	while (argv[1][i])
	{
		if ((argv[1][i] >= 'A' && argv[1][i] <= 'Z') || (argv[1][i] >= 'a' && argv[1][i] <= 'z'))
		
		{
			if (first == 1)
			{
				if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
					argv[1][i] = argv[1][i] - 32;
				first = 0;
			}
			else
			{
				if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
					argv[1][i] += 32;
			}
		}
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}