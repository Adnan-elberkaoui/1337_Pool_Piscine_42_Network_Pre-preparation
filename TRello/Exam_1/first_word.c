/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 04:02:52 by cypher            #+#    #+#             */
/*   Updated: 2026/07/15 23:44:24 by cypher           ###   ########.fr       */
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
	while(argv[1][i] == ' ' || argv[1][i] == '\t')
	{
		i++;
	}
	
	while(argv[1][i])
	{
		s = argv[1][i];
		
			if(s == ' ' || s == '\t')
			{
				break;
			}
				write(1,&s,1);
	i++;
	}
	write(1,"\n",1);
	return 0;
}