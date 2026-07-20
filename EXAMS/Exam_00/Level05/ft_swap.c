/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 21:57:16 by cypher            #+#    #+#             */
/*   Updated: 2026/07/18 21:59:52 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================ft_swap.txt=========================================
// Assignment name  : ft_swap
// Expected files   : ft_swap.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that swaps the contents of two integers the addresses of which
// are passed as parameters.

// Your function must be declared as follows:

// void	ft_swap(int *a, int *b);
// ==========================================================================================

void	ft_swap(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}

