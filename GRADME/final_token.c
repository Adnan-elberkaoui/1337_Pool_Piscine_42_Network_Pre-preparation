#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	end;

	if (argc != 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}

	i = 0;
	while (argv[1][i])
		i++;

	/* Skip trailing spaces and tabs */
	i--;
	while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
		i--;

	end = i;

	/* Find the beginning of the last word */
	while (i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
		i--;

	i++;

	while (i <= end)
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}