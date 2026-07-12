/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 14:23:29 by cypher            #+#    #+#             */
/*   Updated: 2026/07/12 23:57:37 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
	int i;
	
	if(nb <= 1)
		return 0;

	i = 2;
	while (i <= nb / i)
	{
		if(nb % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 0)
		return ft_find_next_prime((nb + 1));
	return (nb);
}