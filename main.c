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


    ft_printf(" ft_printf :%lf|%-lf|%+lf|% lf|%#lf|%0lf\n", 38546.5849, 38546.5849, 38546.5849, 38546.5849, 38546.5849, 38546.5849);
	printf("    printf :%lf|%-lf|%+lf|% lf|%#lf|%0lf", 38546.5849, 38546.5849, 38546.5849, 38546.5849, 38546.5849, 38546.5849);
    printf("\n\n\n");

    // ft_printf(" ft_printf :|%.f|%-.f|%+.f|% .f|%#.f|%0.f", 42., 42., 42., 42., 42., 42.);
	// printf("    printf :|%.f|%-.f|%+.f|% .f|%#.f|%0.f", 42., 42., 42., 42., 42., 42.);
    // printf("\n\n\n");

    // ft_printf(" ft_printf :|%.f|%-.f|%+.f|% .f|%#.f|%0.f", 42., 42., 42., 42., 42., 42.);
	// printf("    printf :|%.f|%-.f|%+.f|% .f|%#.f|%0.f", 42., 42., 42., 42., 42., 42.);
    // printf("\n\n\n");

    // ft_printf(" ft_printf :|%.f|%-.f|%+.f|% .f|%#.f|%0.f", 42., 42., 42., 42., 42., 42.);
	// printf("    printf :|%.f|%-.f|%+.f|% .f|%#.f|%0.f", 42., 42., 42., 42., 42., 42.);
    // printf("\n\n\n");

    // ft_printf(" ft_printf :|%f\n", 1345.100);
	// printf("    printf :|%f", 1345.100);
    // printf("\n\n\n");


    // ft_printf(" ft_printf :|%.1f|%10.1f|%-10.1f\n", 1345.100, 1345.100, 1345.100);
	// printf("    printf :|%.1f|%10.1f|%-10.1f", 1345.100, 1345.100, 1345.100);
    // printf("\n\n\n");

	// ft_printf(" ft_printf :|%.10f|%10.10f|%-10.10f\n", 1345.100, 1345.100, 1345.100);
	// printf("    printf :|%.10f|%10.10f|%-10.10f", 1345.100, 1345.100, 1345.100);
    // printf("\n\n\n");


	// ft_printf(" ft_printf :|%.10f|%10.10f|%-10.10f\n", 9999.1222999, 9999.1222999, 9999.1222999);
	// printf("    printf :|%.10f|%10.10f|%-10.10f", 9999.1222999, 9999.1222999, 9999.1222999);
    // printf("\n\n\n");


	// ft_printf(" ft_printf :|%.5f|%10.5f|%-10.5f\n", 9999.1222999, 9999.1222999, 9999.1222999);
	// printf("    printf :|%.5f|%10.5f|%-10.5f", 9999.1222999, 9999.1222999, 9999.1222999);
    // printf("\n\n\n");


	// ft_printf(" ft_printf :|%.1f|%10.1f|%-10.1f\n", 9999.1222999, 9999.1222999, 9999.1222999);
	// printf("    printf :|%.1f|%10.1f|%-10.1f", 9999.1222999, 9999.1222999, 9999.1222999);
    // printf("\n\n\n");

	// ft_printf(" ft_printf :|%.25f|\n", 0.6);
	// printf("    printf :|%.25f|\n", 0.6);
    // printf("\n\n\n");


	// ft_printf(" ft_printf :|%.0f|\n", 99.99);
	// printf("    printf :|%.0f|\n", 99.99);
    // printf("\n\n\n");

    // int ret;
    // ret = ft_printf("|%12c|%-12c", 0, 0);
    // printf("%d\n", ret);

    // ret = printf("|%12c|%-12c", 0, 0);
    // printf("%d\n", ret);
    // printf("\n\n\n");



    // ft_printf(" ft_printf :|%-c|%12c|%-12c\n", 1345, 1345, 1345, 1345);
	// printf("    printf :|%-c|%12c|%-12c", 1345, 1345, 1345, 1345);
    // printf("\n\n\n");



    // ft_printf(" ft_printf :%#023o|%-#023o\n", UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);
	// printf("    printf :%#023o|%-#023o", UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);
    // printf("\n\n\n");
    // ft_printf(" ft_printf :%#023o|%-#023o\n", ULONG_MAX, ULONG_MAX, ULONG_MAX, ULONG_MAX);
	// printf("    printf :%#023o|%-#023o", ULONG_MAX, ULONG_MAX, ULONG_MAX, ULONG_MAX);
    // printf("\n\n\n");

    // ft_printf(" ft_printf :%#023o|%-#023o\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	// printf("    printf :%#023o|%-#023o", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
    // printf("\n\n\n");



    // ft_printf(" ft_printf :%.5hho|%-.5hho|%#.5hho|%0.5hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	// printf("    printf :%.5hho|%-.5hho|%#.5hho|%0.5hho", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
    // printf("\n\n\n");


    // ft_printf(" ft_printf :%1.5hho|%-1.5hho|%#1.5hho|%01.5hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	// printf("    printf :%1.5hho|%-1.5hho|%#1.5hho|%01.5hho", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
    // printf("\n\n\n");


    // ft_printf(" ft_printf :%23.5hho|%-23.5hho|%#23.5hho|%023.5hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	// printf("    printf :%23.5hho|%-23.5hho|%#23.5hho|%023.5hho", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
    // printf("\n\n\n");


    // ft_printf(" ft_printf :%-#.5hho|%-0.5hho|%#0.5hho|%-#0.5hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	// printf("    printf :%-#.5hho|%-0.5hho|%#0.5hho|%-#0.5hho", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
    // printf("\n\n\n");

    // ft_printf(" ft_printf :%-#1.5hho|%-01.5hho|%#01.5hho|%-#01.5hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	// printf("    printf :%-#1.5hho|%-01.5hho|%#01.5hho|%-#01.5hho", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
    // printf("\n\n\n");

    // ft_printf(" ft_printf :%-#23.5hho|%-023.5hho|%#023.5hho|%-#023.5hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	// printf("    printf :%-#23.5hho|%-023.5hho|%#023.5hho|%-#023.5hho", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
    // printf("\n\n\n");



    // ft_printf(" ft_printf :%#23.5hho|%023.5hho\n", ULLONG_MAX, ULLONG_MAX);
	// printf("    printf :%#23.5hho|%023.5hho", ULLONG_MAX, ULLONG_MAX);
    // printf("\n\n\n");

    // ft_printf(" ft_printf :%#23.5hho|%023.5hho\n", 0, 0);
	// printf("    printf :%#23.5hho|%023.5hho", 0, 0);
    // printf("\n\n\n");

    // ft_printf(" ft_printf :%#23.5hho|%023.5hho\n", 0, 0);
	// printf("    printf :%#23.5hho|%023.5hho", 0, 0);
    // printf("\n\n\n");

    // ft_printf(" ft_printf :%-#23hho|%-023hho|%#023hho|%-#023hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	// printf("    printf :%-#23hho|%-023hho|%#023hho|%-#023hho", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
    // printf("\n\n\n");

    // ft_printf(" ft_printf :%-#23X|%-023X|%#023X|%-#023X\n", ULONG_MAX, ULONG_MAX, ULONG_MAX, ULONG_MAX);
	// printf("    printf :%-#23X|%-023X|%#023X|%-#023X", ULONG_MAX, ULONG_MAX, ULONG_MAX, ULONG_MAX);
    // printf("\n\n\n");



    // ft_printf(" ft_printf :%23X|%-23X|%#X|%023X\n", 0U, 0U, 0U, 0U);
	// printf("    printf :%23X|%-23X|%#X|%023X", 0U, 0U, 0U, 0U);
    // printf("\n\n\n");

    // ft_printf(" ft_printf :%#1.o|\n", 0U);
	// printf("    printf :%#1.o|", 0U);
    // printf("\n\n\n");

    // ft_printf(" ft_printf :%#23.5lX|%023.5lX\n", ULLONG_MAX, ULLONG_MAX);
	// printf("    printf :%#23.5lX|%023.5lX", ULLONG_MAX, ULLONG_MAX);
    // printf("\n\n\n");


    // ft_printf(" ft_printf :%-+hi|%- hi|%-0hi|%+ hi|%+0hi|% 0hi|%-+ 0hi\n", LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN);
	// printf("    printf :%-+hi|%- hi|%-0hi|%+ hi|%+0hi|% 0hi|%-+ 0hi", LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN);
    // printf("\n\n\n");

    // ft_printf(" ft_printf :%.5hhx|%-.5hhx|%#.5hhx|%0.5hhx\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	// printf("    printf :%.5hhx|%-.5hhx|%#.5hhx|%0.5hhx", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
    // printf("\n\n\n");


    // ft_printf(" ft_printf :%.5hho|%-.5hho|%#.5hho|%0.5hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	// printf("    printf :%.5hho|%-.5hho|%#.5hho|%0.5hho", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
    // printf("\n\n\n");


	// %-#23llX|%-023llX|%#023llX|%-#023llX", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX
    return 0;
}