#include <stdio.h>
/**
 * main - Entry point (A program that prints the size of various types on the computer)
 * Return: 0 (Indicates Success)
 */
int main (void)
{
char c;
int i;
long int r;
long long int d;
float f;

printf("Size of a char: %zu bytes (s)\n", (unsigned) sizeof(c));
printf("Size of an int: %zu bytes (s)\n", (unsigned) sizeof(i));
printf("Size of a long int: %zu bytes (s)\n",(unsigned) sizeof(r));
printf("Size of a long long int: %zu bytes (s)\n", (unsigned) sizeof(d));
printf("Size of a float: %zu bytes (s)\n", (unsigned) sizeof(f));
return (0);
}
