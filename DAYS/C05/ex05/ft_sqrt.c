/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 22:55:41 by cypher            #+#    #+#             */
/*   Updated: 2026/07/13 19:16:14 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int i;
	
	if (nb < 0)
		return 0;
	if (nb == 1)
		return 1;

	i = 1;
		while(i * i <= nb)
		{
			if (i * i == nb)
				return i;
			i++;
		}
		return 0;
	
}

		// recursion //
		
// int ft_sqrt_rec(int nb , int i)
// {
// 	if( i * i == nb)
// 		return i;
// 	if (i * i > nb)
// 		return 0;
// 	return ft_sqrt_rec(nb , i + 1);
// }
//
// int ft_sqrt(int nb)
// {
// 	if(nb < 0)
// 		return 0;
// 	return ft_sqrt_rec(nb , 1);
// }
