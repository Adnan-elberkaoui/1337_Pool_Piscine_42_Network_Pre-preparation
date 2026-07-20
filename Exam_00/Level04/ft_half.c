/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_half.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 20:29:12 by cypher            #+#    #+#             */
/*   Updated: 2026/07/18 20:30:08 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_half
// Expected files   : ft_half.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Create a function that divides an integer by 2. The parameter is a pointer
// pointing to an integer.

// It should be prototyped as such

// void    ft_half(int *ptr)
// ==========================================================================================

void    ft_half(int *ptr)
{
	*ptr = *ptr / 2;
}