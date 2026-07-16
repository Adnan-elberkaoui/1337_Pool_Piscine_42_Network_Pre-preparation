/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 22:18:47 by cypher            #+#    #+#             */
/*   Updated: 2026/07/15 00:14:06 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc , char **argv)
{
	int i;
	int j;
	
	if(argc != 2)
		{
			write(1,"a\n",2);
			return 0;
		}

	i = 1;
	while(i < argc)
	{
		j = 0;
		while(argv[i][j])
		{
				if(argv[i][j] == 'a')
			{
				write(1,"a\n",2);
				break;
			}
		j++;
		}
	i++;
	}
	write(1,"\n",1);
}