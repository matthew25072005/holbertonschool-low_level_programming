#include <studio>
/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n")
		return (1)
	}

	a = atoi(argc[1]);
	b = atoi(argc[2]);
	c = a * b;

	printf("%d\n", c);

	return (0);
}
