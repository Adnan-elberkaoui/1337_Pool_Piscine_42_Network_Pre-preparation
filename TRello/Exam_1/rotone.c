/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 03:35:44 by cypher            #+#    #+#             */
/*   Updated: 2026/07/15 22:53:48 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc , char **argv)
{
	int i;
	char s;
	if(argc != 2)
	{
		write(1,"\n",1);
		return 0; 
	}
	
	i = 0;
	while(argv[1][i])
	{
		s = argv[1][i];
		if((s >= 'a' && s <'z') ||(s >= 'A' && s <'Z'))
		{
			s = s + 1;
			write(1,&s,1);
		}
		else if( s == 'z')
		{
			s = 'a';
			write(1,&s,1);
		}
		else if(s == 'Z')
		{
			s = 'A';
			write(1,&s,1);
		}
		i++;
	}
	write(1,"\n",1);
	return 0;
}