#include <stdio.h>
#include <locale.h>
#include <stdio.h>
#include <wchar.h>      /* wint_t */
#include <limits.h>
int ft_printf(const char* format, ...);

int main(void)
{
	// int *a;

	// a = malloc(sizeof(int));


    int ret;
    ret = ft_printf("%1c|%2c|%12c|%-12c|\n", 0, 0, 0, 0);
    printf("%d\n", ret);

    ret = printf("%1c|%2c|%12c|%-12c|\n", 0, 0, 0, 0);
    printf("%d\n", ret);
    printf("\n\n\n");



    ft_printf(" ft_printf :|%-c|%12c|%-12c\n", 1345, 1345, 1345, 1345);
	printf("    printf :|%-c|%12c|%-12c", 1345, 1345, 1345, 1345);
    printf("\n\n\n");



    ft_printf(" ft_printf :%#023o|%-#023o\n", UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);
	printf("    printf :%#023o|%-#023o", UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);
    printf("\n\n\n");
    ft_printf(" ft_printf :%#023o|%-#023o\n", ULONG_MAX, ULONG_MAX, ULONG_MAX, ULONG_MAX);
	printf("    printf :%#023o|%-#023o", ULONG_MAX, ULONG_MAX, ULONG_MAX, ULONG_MAX);
    printf("\n\n\n");

    ft_printf(" ft_printf :%#023o|%-#023o\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	printf("    printf :%#023o|%-#023o", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
    printf("\n\n\n");



    ft_printf(" ft_printf :%.5hho|%-.5hho|%#.5hho|%0.5hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	printf("    printf :%.5hho|%-.5hho|%#.5hho|%0.5hho", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
    printf("\n\n\n");


    ft_printf(" ft_printf :%1.5hho|%-1.5hho|%#1.5hho|%01.5hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	printf("    printf :%1.5hho|%-1.5hho|%#1.5hho|%01.5hho", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
    printf("\n\n\n");


    ft_printf(" ft_printf :%23.5hho|%-23.5hho|%#23.5hho|%023.5hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	printf("    printf :%23.5hho|%-23.5hho|%#23.5hho|%023.5hho", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
    printf("\n\n\n");


    ft_printf(" ft_printf :%-#.5hho|%-0.5hho|%#0.5hho|%-#0.5hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	printf("    printf :%-#.5hho|%-0.5hho|%#0.5hho|%-#0.5hho", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
    printf("\n\n\n");

    ft_printf(" ft_printf :%-#1.5hho|%-01.5hho|%#01.5hho|%-#01.5hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	printf("    printf :%-#1.5hho|%-01.5hho|%#01.5hho|%-#01.5hho", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
    printf("\n\n\n");

    ft_printf(" ft_printf :%-#23.5hho|%-023.5hho|%#023.5hho|%-#023.5hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	printf("    printf :%-#23.5hho|%-023.5hho|%#023.5hho|%-#023.5hho", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
    printf("\n\n\n");



    ft_printf(" ft_printf :%#23.5hho|%023.5hho\n", ULLONG_MAX, ULLONG_MAX);
	printf("    printf :%#23.5hho|%023.5hho", ULLONG_MAX, ULLONG_MAX);
    printf("\n\n\n");

    ft_printf(" ft_printf :%#23.5hho|%023.5hho\n", 0, 0);
	printf("    printf :%#23.5hho|%023.5hho", 0, 0);
    printf("\n\n\n");

    ft_printf(" ft_printf :%#23.5hho|%023.5hho\n", 0, 0);
	printf("    printf :%#23.5hho|%023.5hho", 0, 0);
    printf("\n\n\n");

    ft_printf(" ft_printf :%-#23hho|%-023hho|%#023hho|%-#023hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	printf("    printf :%-#23hho|%-023hho|%#023hho|%-#023hho", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
    printf("\n\n\n");

    ft_printf(" ft_printf :%-#23X|%-023X|%#023X|%-#023X\n", ULONG_MAX, ULONG_MAX, ULONG_MAX, ULONG_MAX);
	printf("    printf :%-#23X|%-023X|%#023X|%-#023X", ULONG_MAX, ULONG_MAX, ULONG_MAX, ULONG_MAX);
    printf("\n\n\n");



    ft_printf(" ft_printf :%23X|%-23X|%#X|%023X\n", 0U, 0U, 0U, 0U);
	printf("    printf :%23X|%-23X|%#X|%023X", 0U, 0U, 0U, 0U);
    printf("\n\n\n");

    ft_printf(" ft_printf :%#1.o|\n", 0U);
	printf("    printf :%#1.o|", 0U);
    printf("\n\n\n");

    ft_printf(" ft_printf :%#23.5lX|%023.5lX\n", ULLONG_MAX, ULLONG_MAX);
	printf("    printf :%#23.5lX|%023.5lX", ULLONG_MAX, ULLONG_MAX);
    printf("\n\n\n");


    ft_printf(" ft_printf :%-+hi|%- hi|%-0hi|%+ hi|%+0hi|% 0hi|%-+ 0hi\n", LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN);
	printf("    printf :%-+hi|%- hi|%-0hi|%+ hi|%+0hi|% 0hi|%-+ 0hi", LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN);
    printf("\n\n\n");

    ft_printf(" ft_printf :%.5hhx|%-.5hhx|%#.5hhx|%0.5hhx\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	printf("    printf :%.5hhx|%-.5hhx|%#.5hhx|%0.5hhx", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
    printf("\n\n\n");


    ft_printf(" ft_printf :%.5hho|%-.5hho|%#.5hho|%0.5hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	printf("    printf :%.5hho|%-.5hho|%#.5hho|%0.5hho", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
    printf("\n\n\n");


	// %-#23llX|%-023llX|%#023llX|%-#023llX", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX
    return 0;
}