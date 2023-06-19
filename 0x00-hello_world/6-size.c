#include <stdio.h>
/**
 * main - Entry point (A program that prints the size.)
 * Return: 0 (Indicates Success)
 */
int main(void)
{
char c;
int i;
long int r;
long long int d;
float f;
printf("Size of a char: %zu byte(s)\n", (unsigned int)sizeof(c));
printf("Size of an int: %zu byte(s)\n", (unsigned int)sizeof(i));
printf("Size of a long int: %zu byte(s)\n", (unsigned int)sizeof(r));
printf("Size of a long long int: %zu byte(s)\n", (unsigned int)sizeof(d));
printf("Size of a float: %zu byte(s)\n", (unsigned int)sizeof(f));
return (0);
}
