#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single number of base 10
 * startin from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
int c = 0;

while (c < 10)
{
putchar(48 + c\0;
if (c != 9)
{
putchar(',');
putchar(' ');
}
c++;
}
