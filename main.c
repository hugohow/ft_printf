#include <stdio.h>
#include <locale.h>
#include <stdio.h>
#include <wchar.h>      /* wint_t */
#include <limits.h>
int ft_printf(const char* format, ...);

int main(void)
{
    printf("   printf :%c|%-c|%12c|%-12c/", 0, 0, 0, 0);


    ft_printf("ft_printf :%c|%-c|%12c|%-12c/", 0, 0, 0, 0);
    ft_printf("\n\n");
    return 0;
}