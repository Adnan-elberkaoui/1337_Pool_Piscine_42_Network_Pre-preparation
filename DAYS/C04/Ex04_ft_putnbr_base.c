/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ex04_ft_putnbr_base.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:45:38 by cypher            #+#    #+#             */
/*   Updated: 2026/07/20 15:22:29 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_nbr(long nbr , int i , char *base)
{
	if(nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	
	if(nbr >= i)
	{
		ft_nbr((nbr / i) , i , base);
	}
	ft_putchar(base[nbr % i]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int j;
	
	if(base[0] == '\0' || base[1] == '\0')
		return;

	i = 0;
	
	while(base[i])
	{
		if(base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return;

		if(base[i] == '+' || base[i] == '-')
			return;
		
		j = i + 1;
		while(base[j])
		{
			if(base[j] == base[i])
				return;
			j++;
		}
		i++;
	}
	
	i = 0;
	while(base[i])
	{
		i++;
	}
	
	ft_nbr(nbr , i , base);
}

