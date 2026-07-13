/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 01:49:52 by cypher            #+#    #+#             */
/*   Updated: 2026/07/13 19:25:42 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int ft_is_prime(int nb)
// {
// 	int i;
	
// 	if (nb <= 1)
// 	{
// 		return 0;
// 	}

// 	i = 2 ;
// 	while( i * i <= nb)
// 	{
// 		if(nb % i == 0)
// 			return 0;
// 		i++;
// 	}
// 	return 1;
// }
int ft_is_prime_rec(int nb , int i)
{
	if (i * i > nb)
		return (1);
	if (nb % i == 0)
		return (0);
	return ft_is_prime_rec(nb ,i + 1);
}


int ft_is_prime(int nb)
{
	if(nb <= 1)
		return 0;
	return ft_is_prime_rec(nb , 2);
}
