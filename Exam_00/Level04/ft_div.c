/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 20:25:31 by cypher            #+#    #+#             */
/*   Updated: 2026/07/18 20:27:36 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_div
// Expected files   : ft_div.c
// Allowed functions: None

// -------------------------------------------------------------------------------------------
// create a function that divide an integer from an integer pointed by a pointer.the parameters are an integer and a pointer pointing to an integer.

// it should be prototyped as such

// void    ft_div(int a, int *ptr)

void    ft_div(int a, int *ptr)
{
	*ptr = *ptr / a;
}