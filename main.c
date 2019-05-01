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
    ft_printf(" ft_printf :%p", NULL);
	printf("    printf :%p", NULL);
    ft_printf("\n\n");
    return 0;
}