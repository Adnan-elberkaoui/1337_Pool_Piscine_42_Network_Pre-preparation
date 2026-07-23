#include <unistd.h>

static void ft_reverse(char *str , int len)
{
	static int i  = 0;
	char swap;

	len = len - 1;
	while(i < len)
	{
		swap = str[i];
		str[i] = str[len];
		str[len] = swap;
		len--;
		i++;
	}
}
void print_word(char *str)
{
	int i;

	i = 0;
	while(str[i] && str[i] != ' ')
	{
		write(1,&str[i],1);
		i++;
	}
	write(1,&str[i],1);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] && str[i] != ' ')
	{
		i++;
	}
	return i;
}

int main (void)
{
	int len;
	char str[] = "adnan salah adam";
	while(*str)
	{
		if(*str != ' ')
		{
			len = ft_strlen(str);
			ft_reverse(str , len);
			print_word(str); 
			str = str + len;

		}
		else
			str++;
	}
	
	return 0;
}


char str[] = "adnan424";
char str[] = "324adnan";

