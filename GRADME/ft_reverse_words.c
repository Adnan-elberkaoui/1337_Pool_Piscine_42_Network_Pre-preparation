#include <unistd.h>

void ft_swap(char *a , char *b)
{
	char swap;
	swap = *a;
	*a = *b;
	*b = swap;
}

void    ft_reverse_words(char *str)
{
	int i;
	int s;
	int j;

	i = 0;
	while(str[i])
	{
		while(str[i] != ' ')
		{
			i++;
		}
		j = 0;
		s = i - 1;
		if(s > j)
		{
			ft_swap(&str[s] , &str[j]);
 			s--;
			j++;
		}

		i++;
	}

	i = 0;
	while(str[i])
	{
		write(1,&str[i],1);
		i++;
	}
	write(1,"\n",1);
}


int main (void)
{
	char s[] = "hello 1337 world";
	ft_reverse_words(s);
	return 0;
}



//
i = 0 ;
while(str[i] != ' ')
{
	i++;
}
