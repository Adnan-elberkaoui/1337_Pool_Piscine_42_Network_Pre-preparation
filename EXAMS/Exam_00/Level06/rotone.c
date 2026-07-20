/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 00:35:40 by cypher            #+#    #+#             */
/*   Updated: 2026/07/19 00:49:28 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : rotone
// Expected files   : rotone.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays it, replacing each of its
// letters by the next one in alphabetical order.

// 'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

// The output will be followed by a '\n'.

// If the number of arguments is not 1, the program displays '\n'.

// ==========================================================================================

#include <unistd.h>

int main (int argc , char **argv)
{
	int i;
	char s;
	if(argc != 2)
	{
		write(1,"\n",1);
		return 0;
	}
	
	i = 0;
	while(argv[1][i])
	{
		s = argv[1][i];
		if((s >= 'a' && s < 'z') || (s >= 'A' && s < 'Z'))
		{
			s = s + 1;
		}
		else if(s == 'z')
		{
			s = 'a';
		}
		else if(s == 'Z')
		{
			s = 'A';
		}
		write(1,&s,1);
		i++;
	}
	write(1,"\n",1);
	return 0;
}