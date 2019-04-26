#include <stdio.h>
#include <locale.h>
#include <stdio.h>
#include <wchar.h>      /* wint_t */

int ft_printf(const char* format, ...);

int main(void)
{
    printf("%f\n", -5.0);
    ft_printf("%f", -5.0);
    ft_printf("\n\n");
    return 0;
}