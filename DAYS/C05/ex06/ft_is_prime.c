/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 01:49:52 by cypher            #+#    #+#             */
/*   Updated: 2026/07/12 02:36:11 by cypher           ###   ########.fr       */
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

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	printf("0  -> %d\n", ft_is_prime(0));
	printf("1  -> %d\n", ft_is_prime(1));
	printf("2  -> %d\n", ft_is_prime(2));
	printf("3  -> %d\n", ft_is_prime(3));
	printf("4  -> %d\n", ft_is_prime(4));
	printf("5  -> %d\n", ft_is_prime(5));
	printf("7  -> %d\n", ft_is_prime(7));
	printf("9  -> %d\n", ft_is_prime(9));
	printf("11 -> %d\n", ft_is_prime(11));
	printf("13 -> %d\n", ft_is_prime(13));
	printf("15 -> %d\n", ft_is_prime(15));
	printf("17 -> %d\n", ft_is_prime(17));
	printf("25 -> %d\n", ft_is_prime(25));
	printf("97 -> %d\n", ft_is_prime(97));

	return (0);
}