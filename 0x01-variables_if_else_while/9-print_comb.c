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
int c;

for (c = 0; c < 10; c++)
{
putchar(c + '0');
if (c < 9)
{
putchar(',');
putchar(' ');
}

}
putcha('\n');
return (0);
}
