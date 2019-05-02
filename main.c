#include <stdio.h>
#include <locale.h>
#include <stdio.h>
#include <wchar.h>      /* wint_t */
#include <limits.h>
int ft_printf(const char* format, ...);

int main(void)
{
    ft_printf(" ft_printf :%23.5o|%-23.5o|%#23.5o|%023.5o\n", 0U, 0U, 0U, 0U);
	printf("    printf :%23.5o|%-23.5o|%#23.5o|%023.5o\n", 0U, 0U, 0U, 0U);
    printf("\n\n\n");
    ft_printf(" ft_printf :%-#.x|%-0.x|%#0.x|%-#0.x\n", 0U, 0U, 0U, 0U);
	printf("    printf :%-#.x|%-0.x|%#0.x|%-#0.x", 0U, 0U, 0U, 0U);
    printf("\n\n\n");
    ft_printf(" ft_printf :%23.o|%-23.o|%#23.o|%023.o\n", 0U, 0U, 0U, 0U);
	printf("    printf :%23.o|%-23.o|%#23.o|%023.o", 0U, 0U, 0U, 0U);
    printf("\n\n\n");
    ft_printf(" ft_printf :%23.x|%-23.x|%#23.x|%023.x\n", 0U, 0U, 0U, 0U);
	printf("    printf :%23.x|%-23.x|%#23.x|%023.x", 0U, 0U, 0U, 0U);

    printf("\n\n\n");
    ft_printf(" ft_printf :%23.3X|%-23.3X|%#23.3X|%023.3X\n", 0U, 0U, 0U, 0U);
	printf("    printf :%23.3X|%-23.3X|%#23.3X|%023.3X", 0U, 0U, 0U, 0U);


    printf("\n\n\n");
    ft_printf(" ft_printf :%23.5u|%-23.5u|%023.5u\n", 0U, 0U, 0U);
	printf("    printf :%23.5u|%-23.5u|%023.5u", 0U, 0U, 0U);


    printf("\n\n\n");
    ft_printf(" ft_printf :%-#23.o|%-023.o|%#023.o|%-#023.o\n", 0U, 0U, 0U, 0U);
	printf("    printf :%-#23.o|%-023.o|%#023.o|%-#023.o", 0U, 0U, 0U, 0U);

    ft_printf("\n\n");
    return 0;
}