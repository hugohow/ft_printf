#include <stdio.h>
#include <locale.h>
#include <stdio.h>
#include <wchar.h>      /* wint_t */

int ft_printf(const char* format, ...);

int main(void)
{
    printf("%f\n", -100.100);
    ft_printf("%f", -100.100);
    ft_printf("\n\n");
    return 0;
}