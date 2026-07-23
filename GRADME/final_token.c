// Write a program that receives exactly one string argument and prints its last word followed by a newline.

// Steps


// A word is a sequence of non-whitespace characters. Spaces and tabs act as delimiters.

// Skip any trailing spaces or tabs before locating the last word.

// If the program is called with anything other than exactly one argument, 
// print wrong number of arguments followed by a newline. If no word is found, print only a newline.
// examples
// ./final_token "llm says works on my branch" | cat -e

// branch$

// ./final_token "rebase squash push" | cat -e

// push$

// ./final_token " " | cat -e

// $



#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}

	i = 0;
	while (argv[1][i])
		i++;

	i--;

	// skip trailing spaces and tabs
	while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
		i--;

	// no word found
	if (i < 0)
	{
		write(1, "\n", 1);
		return (0);
	}

	// find the beginning of the last word
	while (i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
		i--;

	i++;

	// print last word
	while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
	{
		write(1, &argv[1][i], 1);
		i++;
	}

	write(1, "\n", 1);
	return (0);
}