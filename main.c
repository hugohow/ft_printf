#include <stdio.h>
#include <locale.h>
#include <stdio.h>
#include <wchar.h>      /* wint_t */

int ft_printf(const char* format, ...);

int main(void)
{
    printf("   printf :%23.5i|%-23.5i|%+23.5i|% 23.5i|%023.5i|", 0, 0, 0, 0, 0);


    ft_printf("ft_printf :%23.5i|%-23.5i|%+23.5i|% 23.5i|%023.5i|", 0, 0, 0, 0, 0);
    ft_printf("\n\n");
    return 0;
}