#include <stdio.h>
#include <locale.h>
#include <stdio.h>
#include <wchar.h>      /* wint_t */
#include <limits.h>
int ft_printf(const char* format, ...);

int main(void)
{
    printf("   printf :This is a %s", "random string");


    ft_printf("ft_printf :This is a %s", "random string");
    ft_printf("\n\n");
    return 0;
}