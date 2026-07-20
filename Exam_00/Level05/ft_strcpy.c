/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 21:15:10 by cypher            #+#    #+#             */
/*   Updated: 2026/07/18 21:28:18 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================ft_strcpy.txt=========================================
// Assignment name  : ft_strcpy
// Expected files   : ft_strcpy.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcpy (man strcpy).

// Your function must be declared as follows:

// char    *ft_strcpy(char *s1, char *s2);
// ==========================================================================================

char    *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	
	return s1;
}
