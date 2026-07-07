/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ex12_ft_print_memory.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypher <cypher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 19:04:32 by cypher            #+#    #+#             */
/*   Updated: 2026/07/07 16:05:11 by cypher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_address(unsigned long addr)
{
    char *hex;
    hex = "0123456789abcdef";
    char str[16];
    int i ;
    i = 15 ;

    while(i >= 0)
    {
        str[i] = hex[addr % 16];
        addr = addr / 16 ;
        i--;
    }
    write(1,str,16);
    write(1,": ",2);
}

void *ft_print_memory(void *addr, unsigned int size)
{
       char *hex;
       int i;
       int j;
       
       hex = "0123456789abcdef";
       unsigned char *str = (unsigned char *)addr;
       
       j = 0;
       while( j < size)
       {
          ft_address((unsigned long) (&str[j]));
          i = 0;
          while(i <= 15)
          {
              if( i + j < size)
              {
                write(1, &hex[str[i + j] / 16] ,1);
                write(1, &hex[str[i + j] % 16] ,1);
              }
              else
              {
                write(1,"  ",2);
              }

              if(i % 2 != 0)
              {
                write(1," ",1);
              }
              
              i++;
          }
          i = 0;
          while(i < 16 && i + j < size)
          {
            if(str[i + j] >= 32 && str[i + j] <= 126)
            {
                write(1,&str[i + j],1);
            }
            else
            {
                write(1,".",1);
            }
            i++;
          }
          write(1,"\n",1);
          j = j + 16;  
       }

      return addr;
       
}


int main(void){

    char str[] = "Couco\\nnu\ntu vas \r-42 bien\b ajskd\n\n\n\n\njoiws sk\rdf aso odkowa  dsgjfdks]n\n\r\r ?";
    unsigned int size;

    size = sizeof(str) - 1;
    ft_print_memory(str,size);
    
    return (0);
} 
