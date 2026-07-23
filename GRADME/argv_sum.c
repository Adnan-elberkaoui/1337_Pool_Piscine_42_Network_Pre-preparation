#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putnbr(int nb)
{
	if(nb == -2147483648)
	{
		write(1,"-2147483648",11);
		return;
	}
	if(nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}

	if(nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');

}

int atoi(char *str)
{
	int i;
	int sign;
	int result;

	result = 0;
	sign = 1;
	i = 0;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}

	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}

	return result * sign;
}

int	main(int argc, char **argv)
{
	int j;
	int sum;
	int x;

	sum = 0;
	j = 1;
	
	while(j < argc)
	{
		x = atoi(argv[j]);
		sum = sum + x ;
		j++;
	}

	ft_putnbr(sum);
	write(1,"\n",1);
	return (0);
}
