/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 21:58:15 by cypher            #+#    #+#             */
/*   Updated: 2026/07/11 22:19:00 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if(power < 0)
		return (0);
	if(power == 0)
		return(1);
	return (nb * ft_recursive_power(nb , (power - 1)));
}
