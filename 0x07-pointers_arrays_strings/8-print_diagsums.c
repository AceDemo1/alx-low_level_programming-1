/**
 * print_diagsums - print the sum of the two
 *                 diagonals of a square matrix
 *                 of integers.
 * @a: input pointer
 * @size: size of the matrix
 *
 * Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (size * i + i));
		sum2 += *(a + (size * i + size - 1 - i));
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
