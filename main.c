#include <stdio.h>
#include <locale.h>
#include <stdio.h>
#include <wchar.h>      /* wint_t */
#include <limits.h>
int ft_printf(const char* format, ...);

int main(void)
{
    printf("   printf :%-#23.o|%-023.o|%#023.o|%-#023.o|", UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);


    ft_printf("ft_printf :%-#23.o|%-023.o|%#023.o|%-#023.o|", UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);
    ft_printf("\n\n");
    return 0;
}