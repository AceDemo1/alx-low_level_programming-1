#include"main.h"
#include <string.h>

/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
char a[] = "_putchar";
int i = 0;
int j = strlen(a);
while (i < j)
{
_putchar(a[i]);
i++;
}

_putchar('\n');

return (0);
}
