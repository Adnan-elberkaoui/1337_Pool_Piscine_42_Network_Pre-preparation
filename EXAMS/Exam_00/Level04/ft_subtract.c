/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subtract.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 20:42:46 by cypher            #+#    #+#             */
/*   Updated: 2026/07/18 20:44:41 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// project name :ft_subtract.c

// -----------------------------------------------------------------

// create a function that subtracts an integer from an integer pointed by a pointer.the parameters are an integer and a pointer pointing to an integer.

// it should be prototyped as such

// void    ft_subtract(int a, int *ptr)

void    ft_subtract(int a, int *ptr)
{
	*ptr = *ptr - a ;
}