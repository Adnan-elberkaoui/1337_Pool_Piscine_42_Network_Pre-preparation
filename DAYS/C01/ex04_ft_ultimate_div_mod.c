void ft_ultimate_div_mod(int *a, int *b)
{
     int swap ;
     swap = *a ;
     *a = swap / *b ;
     *b = swap % *b ;
}


#include <stdio.h>

int main (void)
{
    int x = 20;
    int y = 6;

  ft_ultimate_div_mod(&x, &y);
  printf("div = %d , mode = %d\n" , x , y);
  return 0 ;
}