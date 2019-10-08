#include "holberton.h"
#include <stdio.h>
/**
 * print_chessboard - prints buffer in hexa
 * @a: cheese
 * needle: buffer2
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i, j, s = 0, t = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				s = s + a[(size + 1) * i];
			}
			if (i + j == size)
			{
				t = t + a[(size - 1) * i];
			}
		}
	}
	printf("%i, %i\n", s, t);
}