/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 18:05:50 by cypher            #+#    #+#             */
/*   Updated: 2026/07/11 21:57:12 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int result;
	if (power < 0)
		return 0;
	if (power == 0)
		return 1;

		result = 1;
		while(power > 0)
		{
			result = result * nb;
			power--;
		}
		return result;
}
