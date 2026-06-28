void ft_sort_int_tab(int *tab, int size)
{
    int i ;
    int j ;
    int temp ;
    j = 0 ;
    i = 0 ;

    while(i < size)
    {
        j = i + 1 ;
        while( j < size)
        {
        if(tab[i] > tab[j])
        {
            temp = tab[j];
            tab[j] = tab[i];
            tab[i] = temp;
        }
        j++;
        }
      i++;  
    }
}
