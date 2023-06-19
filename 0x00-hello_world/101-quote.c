#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point (A program that prints a line of code using simple function)
 *Return: 1 (Set return)
 */
int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19,\n";
	write(STDOUT_FILENO, message, sizeof(message) - 1);	
	return (1);
}
