#include <stdio.h>
#include <locale.h>
#include <stdio.h>
#include <wchar.h>      /* wint_t */
#include <limits.h>
int ft_printf(const char* format, ...);

int main(void)
{
	int *a;

	a = malloc(sizeof(int));
    ft_printf(" ft_printf :{yellow}%.5X{eoc}|%-.5X|%#.5X|%0.5X", 0U, 0U, 0U, 0U);
    ft_printf("\n\n");
    return 0;
}