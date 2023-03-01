
Search or jump to…
Pull requests
Issues
Codespaces
Marketplace
Explore
 
@Fredric90 
Lordwill1
/
alx-low_level_programming
Public
Fork your own copy of Lordwill1/alx-low_level_programming
Code
Issues
Pull requests
1
Actions
Projects
Security
Insights
Beta Try the new code view
alx-low_level_programming/0x06-pointers_arrays_strings/104-print_buffer.c
@Lordwill1
Lordwill1 Added task 11 and 12 of project 0x03 .c
Latest commit ba2bb3a on Sep 22, 2022
 History
 1 contributor
58 lines (56 sloc)  850 Bytes

#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a s bytes of a buffer
 * @c: buffer to print
 * @s: bytes of buffer to print
 * @l: line of buffer to print
 *
 * Return: void
 */

void print_line(char *c, int s, int l)
{
int j, k;
for (j = 0; j <= 9; j++)
{
if (j <= s)
printf("%02x", c[l * 10 + j]);
else
printf("  ");
if (j % 2)
putchar(' ');
}
for (k = 0; k <= s; k++)
{
if (c[l * 10 + k] > 31 && c[l * 10 + k] < 127)
putchar(c[l * 10 + k]);
else
putchar('.');
}
}

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
int i;
for (i = 0; i <= (size - 1) / 10 && size; i++)
{
printf("%08x: ", i * 10);
if (i < size / 10)
{
print_line(b, 9, i);
}
else
{
print_line(b, size % 10 - 1, i);
}
putchar('\n');
}
if (size == 0)
putchar('\n');
}
