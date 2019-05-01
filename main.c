#include <stdio.h>
#include <locale.h>
#include <stdio.h>
#include <wchar.h>      /* wint_t */
#include <limits.h>
int ft_printf(const char* format, ...);

int main(void)
{
    ft_printf(" ft_printf :%-#23.5ho|%-023.5ho|%#023.5ho|%-#023.5ho", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	printf("    printf :%-#23.5ho|%-023.5ho|%#023.5ho|%-#023.5ho", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
    ft_printf("\n\n");
    return 0;
}