char *ft_strrev(char *str)
{
    int i;
    int j;
    char temp;

    i = 0 ;
    while(str[i])
    {
        i++;
    }

    i = i - 1 ;
    j = 0 ;

    while(i > j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i--;
        j++;
    }

    return str ;
}
