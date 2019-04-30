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
    // printf("   printf :%p", "Random string");
	// printf("   printf :%p", "Random string");


    ft_printf("test %-7C %007d%-10.2ls!!\n", 0xd777, 0x45, "L〻");
    ft_printf("\n\n");
    return 0;
}