/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_cases.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 00:51:36 by cypher            #+#    #+#             */
/*   Updated: 2026/07/19 00:56:40 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : swap_cases
// Expected files   : swap_cases.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that takes a string and reverses the case of all its letters.
// Uppercase letters must be converted to lowercase, and lowercase letters must
// be converted to uppercase.

// Other characters remain unchanged.

// The function must be prototyped as follows:

// char    *swap_cases(char *str);
// ==========================================================================================

#include <unistd.h>

char    *swap_cases(char *str)
{
	  int i;
	  
	  i = 0;
	  while(str[i])
	  {
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	  }
	  return str;
}