/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   occ_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 20:55:45 by cypher            #+#    #+#             */
/*   Updated: 2026/07/18 21:04:21 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================occ_a.txt=========================================
// Assignment name  : occ_a
// Expected files   : occ_a.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that takes a string and return how many times it incounters 'A'

// The function should be declared as follows

// int occ_a(char *str);
// ==========================================================================================

int occ_a(char *str)
{
	int i;

	i = 0;
	while(*str)
	{
		if(*str == 'A')
		{
			i++;
		}
		str++;
	}
	return i;
}