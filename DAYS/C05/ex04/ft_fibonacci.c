/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 22:21:44 by cypher            #+#    #+#             */
/*   Updated: 2026/07/13 19:09:30 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if (index < 0)
    	return (-1);
	
	if (index == 0)
    	return (0);
	
	if (index == 1)
    	return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
