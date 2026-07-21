/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ex05_ft_atoi_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 15:49:58 by cypher            #+#    #+#             */
/*   Updated: 2026/07/20 19:13:36 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi_base(char *str, char *base)
{
	int i;
	int sign;
	int j;
	int len;
	int result;

	if (base[0] == '\0' || base[1] == '\0')
		return 0;

	i = 0;
	sign = 1;
	
	while(base[i])
	{
		if(base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return 0;

		if(base[i] == '+' || base[i] == '-')
			return 0;
		
		j = i + 1;
		while(base[j])
		{
			if (base[i] == base[j])
				return 0;
			j++;
		}
		i++;
	}

	len = 0;
	while(base[len])
	{
		len++;
	}
	
	i = 0;
	result = 0;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	
	while(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	

	while(str[i])
	{
		j = 0;
		while(base[j] && base[j] != str[i])
		{
			j++;
		}
		
		if(str[i] != base[j])
			break;
		
		result = result * len + j;
		i++;
	}

	return result * sign;
}

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("%d\n", ft_atoi_base("42", "0123456789"));               // 42
	printf("%d\n", ft_atoi_base("-42", "0123456789"));              // -42
	printf("%d\n", ft_atoi_base("+42", "0123456789"));              // 42
	printf("%d\n", ft_atoi_base("0", "0123456789"));                // 0

	printf("%d\n", ft_atoi_base("101010", "01"));                   // 42
	printf("%d\n", ft_atoi_base("52", "01234567"));                 // 42
	printf("%d\n", ft_atoi_base("2A", "0123456789ABCDEF"));         // 42
	printf("%d\n", ft_atoi_base("2a", "0123456789abcdef"));         // 42

	printf("%d\n", ft_atoi_base("   \t\n42", "0123456789"));        // 42
	printf("%d\n", ft_atoi_base("   ---+--+42", "0123456789"));     // -42

	printf("%d\n", ft_atoi_base("42abc", "0123456789"));            // 42
	printf("%d\n", ft_atoi_base("abc42", "0123456789"));            // 0
	printf("%d\n", ft_atoi_base("", "0123456789"));                 // 0

	printf("%d\n", ft_atoi_base("FF", "0123456789ABCDEF"));         // 255
	printf("%d\n", ft_atoi_base("11111111", "01"));                 // 255

	/* Invalid base */
	printf("%d\n", ft_atoi_base("42", "0"));                        // 0
	printf("%d\n", ft_atoi_base("42", "00123456789"));              // 0
	printf("%d\n", ft_atoi_base("42", "012+3456789"));              // 0
	printf("%d\n", ft_atoi_base("42", "012-3456789"));              // 0
	printf("%d\n", ft_atoi_base("42", ""));                         // 0

	return (0);
}