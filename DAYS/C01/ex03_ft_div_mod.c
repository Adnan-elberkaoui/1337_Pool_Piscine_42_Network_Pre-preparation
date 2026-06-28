void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b ;
    *mod = a % b ;
}

#include <stdio.h>

int main (void)
{
    int d;
    int m;

  ft_div_mod(20, 6, &d, &m);
  printf("div = %d , mode = %d\n" , d , m);
  return 0 ;
}