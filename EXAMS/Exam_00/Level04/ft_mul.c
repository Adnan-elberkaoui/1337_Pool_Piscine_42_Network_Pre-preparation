/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mul.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 20:32:52 by cypher            #+#    #+#             */
/*   Updated: 2026/07/18 20:33:28 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_mul
// Expected files   : ft_mul.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// create a function that multiply an integer from an integer pointed by a pointer.the parameters are an integer and a pointer pointing to an integer.

// it should be prototyped as such

// void    ft_mul(int a, int *ptr)

void    ft_mul(int a, int *ptr)
{
	*ptr = *ptr * a;
}