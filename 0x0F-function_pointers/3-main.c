#include "3-calc.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


/**
  * main - main function
  * @argc: the numbers of arguments
  * @argv: arguments list
  *
  * Return: ...
  */
int main(int argc, char *argv[])
{
	int (*opr)(int, int);

	if (argc != 4)
	{
		write(1, "Error\n", 6);
		exit(98);
	}

	opr = get_op_func(argv[2]);
	
	
	if (!opr)
	{
		printf("Error\n");
		exit(99);
	}
	
	printf("%d\n", opr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
