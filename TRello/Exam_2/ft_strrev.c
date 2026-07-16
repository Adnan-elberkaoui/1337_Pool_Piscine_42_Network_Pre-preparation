/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 04:56:22 by cypher            #+#    #+#             */
/*   Updated: 2026/07/16 05:21:57 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_swap(char *a , char *b)
{
	char swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
char    *ft_strrev(char *str)
{
	int i;
	int j;
	
	i = 0;
	while(str[i])
	{
		i++;
	}
	
	i = i - 1;
	j = 0;
	while(i > j)
	{
		ft_swap(&str[i] , &str[j]);
		j++;
		i--;
	}
	return str;
}
