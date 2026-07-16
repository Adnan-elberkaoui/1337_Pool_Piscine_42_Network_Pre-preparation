/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 02:03:51 by cypher            #+#    #+#             */
/*   Updated: 2026/07/16 03:08:17 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i;
	int result;
	int sign ;
	
	sign = 1;
	result = 0;
	i = 0;
	while((str[i] == ' ' ) || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}

	if(str[i] == '-' ||str[i] == '+')
	{
		if(str[i])
		{
			sign = -1;
		}
		i++;
	}
	
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	
	return (result * sign);
}
