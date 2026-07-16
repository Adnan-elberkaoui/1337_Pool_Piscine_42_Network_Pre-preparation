/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 01:45:54 by cypher            #+#    #+#             */
/*   Updated: 2026/07/15 01:55:50 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

int main (int argc , char **argv)
{
	char s;
	int i;
	if(argc != 2)
	{
		write(1,"\n",1);
		return 0;
	}

	i = 0;
	while(argv[1][i])
	{
		s = argv[1][i];
		
		if(s >= 'a' && s <= 'z')
		{
			ft_putchar(s - 32);
		}
		else if(s >= 'A' && s <= 'Z')
		{
			ft_putchar(s + 32);
		}
		else
		{
			ft_putchar(s);
		}
	 i++;
	}
	write(1,"\n",1);
	return 0;
}