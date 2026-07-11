/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 17:58:15 by cypher            #+#    #+#             */
/*   Updated: 2026/07/11 18:04:51 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if (nb < 0)
    	return (0);

	if (nb == 0 || nb == 1)
   		return (1);
	
	return (nb * ft_recursive_factorial(nb - 1));
}