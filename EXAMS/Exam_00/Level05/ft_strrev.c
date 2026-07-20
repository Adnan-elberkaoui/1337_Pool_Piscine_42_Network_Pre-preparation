/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 21:30:18 by cypher            #+#    #+#             */
/*   Updated: 2026/07/18 21:56:22 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================ft_strrev.txt=========================================
// Assignment name  : ft_strrev
// Expected files   : ft_strrev.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that reverses (in-place) a string.

// It must return its parameter.

// Your function must be declared as follows:

// char    *ft_strrev(char *str);
// ==========================================================================================

void ft_swap(char *a , char *b)
{
	char swap;
	swap = *a;
	*a = *b;
	*b = swap;
}

char    *ft_strrev(char *str)
{
	int i;
	int j;
	i = 0;
	while(str[i])
	{
		i++;
	}

	i = i - 1;
	j = 0;
	while(j < i)
	{
		ft_swap(&str[i] , &str[j]);
		j++;
		i--;
	}

	return str;
}