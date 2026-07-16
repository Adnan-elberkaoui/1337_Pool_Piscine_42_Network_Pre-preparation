/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 00:43:25 by cypher            #+#    #+#             */
/*   Updated: 2026/07/15 01:02:20 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc , char **argv)
{
	int i;
	int j;
	if(argc <= 1)
	{
		write(1,"\n",1);
		return 0;
	}
	
	i = argc - 1;
	j = 0;
	while(argv[i][j])
	{
		write(1,&argv[i][j],1);
		j++;
	}
	write(1,"\n",1);
}