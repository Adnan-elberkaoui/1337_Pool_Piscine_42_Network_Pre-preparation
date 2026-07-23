#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int j;
	int printed[256] = {0};

	if(argc != 3)
	{
		write(1,"wrong number of arguments\n",26);
		return 0;
	}

	i = 0;
	while(argv[2][i])
	{
		j = 0;
		while(argv[1][j])
		{
			if(argv[2][i] == argv[1][j] && printed[(unsigned char)argv[2][i]] == 0)
			{
				write(1,&argv[2][i],1);
				printed[(unsigned char)argv[2][i]] = 1;
				break ;
			}
			j++;
		}
		i++;
	}
	return (0);
}
