/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 01:03:55 by cypher            #+#    #+#             */
/*   Updated: 2026/07/19 01:40:35 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================ft_atoi.txt=========================================
// Assignment name  : ft_atoi
// Expected files   : ft_atoi.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str to an integer (type int)
// and returns it.

// It works much like the standard atoi(char *str) function, see the man.

// Your function must be declared as follows:

// int	ft_atoi(char *str);
// ==========================================================================================

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int result;
	result = 0;
	sing = 1;
	
	i = 0;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if(str[i] == '-' || str[i] == '+')
		{
			if(str[i] == '-')
			{
			sing = -1;
			}
			i++;
		}
		
	while (str[i] >= '0' && str[i] <= '9' )
		{
			result = result * 10 + str[i] - '0';
			i++;
		}
	
	return result * sign;
}