#include <stdio.h>
#include <stdlib.h>

/**
 *main - function to return the change of the coins
 *@argc: is the number of arguments entered in argv
 *@argv: is the cash part
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int change, amount;
	char i[] = "Error";

	change = 0;
	amount = 0;

	if (argc != 2)
	{
		printf("%s\n", i);
		return (1);
	}

	amount = atoi(argv[1]);
	while (amount >= 25)
	{
		amount -= 25;
		change++;
	}
	while (amount >= 10)
	{
		amount -= 10;
		change++;
	}
	while (amount >= 5)
	{
		amount -= 5;
		change++;
	}
	while (amount >= 2)
	{
		amount -= 2;
		change++;
	}
	if (amount == 1)
	{
		change++;
	}
		printf("%d\n", change);
	return (0);
}
