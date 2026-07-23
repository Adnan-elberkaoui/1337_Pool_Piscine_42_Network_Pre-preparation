#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	char s;

	if(argc != 2)
	{
		write(1,"wrong number of arguments\n",26);
		return 0;
	}

	i = 0;
	while(argv[1][i])
	{
		s = argv[1][i];

		if(s >= 'a' && s <= 'z')
		{
			s = 'a' + 'z' - s;
		}

		write(1,&s,1);
		i++;
	}
	write(1,"\n",1);
	return (0);
}