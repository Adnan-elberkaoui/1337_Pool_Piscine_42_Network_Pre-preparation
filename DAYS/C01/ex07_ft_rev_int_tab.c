#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i ;
    int j ;
    int temp ;
    j = size -1 ;
    i = 0 ;
    while(i < j)
    {
    temp = tab[i];
    tab[i] = tab[j];
    tab[j] = temp;
    j--;
    i++;
    }

}
