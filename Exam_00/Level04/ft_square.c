/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 20:40:32 by cypher            #+#    #+#             */
/*   Updated: 2026/07/18 20:41:43 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_square
// Expected files   : ft_square.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Create a function that squares the integer pointed to by a pointer.

// It should be prototyped as such

// void    ft_square(int *ptr)
// ==========================================================================================

void    ft_square(int *ptr)
{
	*ptr = *ptr * *ptr;
}