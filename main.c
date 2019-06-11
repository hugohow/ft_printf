#include <stdio.h>
#include <locale.h>
#include <stdio.h>
#include <wchar.h>      /* wint_t */
#include <limits.h>
#include <math.h>
#include <float.h>
#include "ft_printf.h"

int ft_printf(const char* format, ...);

int main(void)
{

// ft_printf("{%05.c}\n", 0);
// printf("{%05.c}", 0);


// ft_printf("{%3*p}\n", 10, 0);
// printf("{%3*p}", 10, 0);


// ft_printf("% u|%+u\n", 42, 42);
// printf("% u|%+u", 42, 42);

// ft_printf("{%f}{%lf}\n", 1.42, 1.42l);
// printf("{%f}{%lf}", 1.42, 1.42l);


ft_printf("{%f}{%lf}\n", 1., 1.l);
printf("{%f}{%lf}", 1., 1.l);


// ft_printf("\nft_printf +99.1: %.5e|\n", +99.1);
// printf("   printf +99.1: %.5e|\n", +99.1);
// ft_printf("ft_printf +0.1: %.5e|\n", +0.1);
// printf("   printf +0.1: %.5e|\n", +0.1);
// ft_printf("ft_printf +15.0: %.5e|\n", +15.0);
// printf("   printf +15.0: %.5e|\n", +15.0);
// ft_printf("ft_printf +30: %.5e|\n", (double)30);
// printf("   printf +30: %.5e|\n", (double)30);
// ft_printf("ft_printf +0L: %.5e|\n", (double)0);
// printf("   printf +0L: %.5e|\n", (double)0);
// ft_printf("ft_printf +0L: %.e|\n", (double)0);
// printf("   printf +0L: %.e|\n", (double)0);
// ft_printf("ft_printf +0L: %.e|\n", INFINITY);
// printf("   printf +0L: %.e|\n", INFINITY);


// ft_printf("\nft_printf +99.1: %.5Le|\n", (long double)+99.1);
// printf("   printf +99.1: %.5Le|\n", (long double)+99.1);
// ft_printf("ft_printf +0.1: %.5Le|\n", (long double)+0.1);
// printf("   printf +0.1: %.5Le|\n", (long double)+0.1);
// ft_printf("ft_printf +15.0: %.5Le|\n", (long double)+15.0);
// printf("   printf +15.0: %.5Le|\n", (long double)+15.0);
// ft_printf("ft_printf +30: %.5Le|\n", (long double)30);
// printf("   printf +30: %.5Le|\n", (long double)30);
// ft_printf("ft_printf +0L: %.5Le|\n", (long double)0);
// printf("   printf +0L: %.5Le|\n", (long double)0);

// 	char str1[99999];
// 	int ret;

// 	ret = ft_sprintf(str1, "%23.5li|%-23.5li|%+23.5li|%c|%023.5li\n", LLONG_MIN, LLONG_MIN, LLONG_MIN, 0, LLONG_MIN);
// 	printf("ret : %d, str1 : %s\n", ret, str1);


// 	char tmp[99999];

// 	ret = ft_sprintf(tmp, "%23.5li|%-23.5li|%+23.5li|%c|%023.5li\n", LLONG_MIN, LLONG_MIN, LLONG_MIN, 0, LLONG_MIN);
// 	printf("ret : %d, str : %s\n", ret, tmp);

// ft_printf("%e|%-e|%+e|% e|%#e|%0e", DBL_MAX, DBL_MAX, DBL_MAX, DBL_MAX, DBL_MAX, DBL_MAX);
// printf("%.350f", 1.e-201);

// 	printf("%d\n", ft_printf("% Zoooo"));
// 	ft_printf("{%0-3d}", 0);
// 	ft_printf("{cyan} ellllllo{eoc}", 0);
// 	printf("{%0-3d}", 0);


// 	ft_printf("{%*d}", -5, 42);;
// 	printf("{%*d}", -5, 42);

// 	ft_printf("%.1f|%1f\n", 1.0, 1.0);
// 	printf("%.1f|%1f", 1.0, 1.0);


// 	printf("%d", printf("% Zoooo %d",1));
// 	printf("%d", printf("% "));
// 	printf("\n\n");

// 	ft_printf("%");
// 	printf("%");
// 	printf("%5%\n");
// 	printf("\n\n");

// 	ft_printf("%0%\n");
// 	printf("%0%\n");
// 	printf("\n\n");

// 	ft_printf("%.0%\n");
// 	printf("%.0%\n");
// 	printf("\n\n");

// 	ft_printf("%%0-3d %0-3d\n", 0);
// 	printf("%%0-3d %0-3d\n", 0);
// 	printf("\n\n");

// 	ft_printf("%%05.s %05.s\n", 0);
// 	printf("%%05.s %05.s\n", 0);
// 	printf("\n\n");



// 	ft_printf("%%p %p\n", NULL);
// 	printf("%%p %p\n", NULL);
// 	printf("\n\n");

// 		ft_printf("%%p %p\n", "Random string");
// 	printf("%%p %p\n", "Random string");
// 	printf("\n\n");

// 		ft_printf("%%p %30p\n", "Random string");
// 	printf("%%p %30p\n", "Random string");
// 	printf("\n\n");

// 		ft_printf("%%p %p\n", &printf);
// 	printf("%%p %p\n", &printf);
// 	printf("\n\n");


// 	ft_printf("%%10p %10p\n", 0);
// 	printf("%%10p %10p\n", 0);
// 	printf("\n\n");


// 	ft_printf("%%10.2p %10.2p\n", 0);
// 	printf("%%10.2p %10.2p\n", 0);
// 	printf("\n\n");


// 	ft_printf("%%10.4p %10.4p\n", 0);
// 	printf("%%10.4p %10.4p\n", 0);
// 	printf("\n\n");



// 	ft_printf("%%10.0p %10.0p\n", 0);
// 	printf("%%10.0p %10.0p\n", 0);
// 	printf("\n\n");


// 	ft_printf("%%0.0p %0.0p\n", 0);
// 	printf("%%0.0p %0.0p\n", 0);
// 	printf("\n\n");

// 	ft_printf("%%lp %lp\n", 42);
// 	printf("%%lp %lp\n", 42);
// 	printf("\n\n");

// 	ft_printf("%p\n", NULL);
// 	printf("%p", NULL);
// ft_printf("%.5p\n", 0);
// printf("%.5p", 0);

// 	ft_printf("% -2.1e\n", 0.0);
// 	printf("% -2.1e", 0.0);

// 	ft_printf("%e\n", 123499912349991234999123499912349991234999123499912349991234999123499912349991234999123499912349991234999123499912349991234999123499912349991234999123499912349991234999123499912349991234999.222221);
// 	printf("%e", 123499912349991234999123499912349991234999123499912349991234999123499912349991234999123499912349991234999123499912349991234999123499912349991234999123499912349991234999123499912349991234999.222221);
// 	printf("%-04.0p", 0, 0);


// 	printf("%.0%");
// 	ft_printf("%hd\n", 32769);
// 	printf("%hd", 32769);
// 	ft_printf("%23.5li|%-23.5li|%+23.5li|% 23.5li|%023.5li\n", LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN);
// 	ft_printf("%-+23.5hhi|%- 23.5hhi|%-023.5hhi|%+ 23.5hhi|%+023.5hhi|% 023.5hhi|%-+ 023.5hhi\n", LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN);
// 	printf("%-+23.5hhi|%- 23.5hhi|%-023.5hhi|%+ 23.5hhi|%+023.5hhi|% 023.5hhi|%-+ 023.5hhi", LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN);

// 	char str[9999];

// 	ft_sprintf(str, "ok %d sdasda", 9999);
// 	printf("%s", str);
// 	printf("printf\t\t|%5%|\n");


// 	ft_dprintf(2, "ft_printf\t|%5%|\n");
// 	printf("printf\t\t|%5%|\n");

// 	ft_printf("ft_printf\t|%-5%|\n");
// 	printf("printf\t\t|%-5%|\n");

// 	ft_printf("ft_printf\t|%%|\n");
// 	printf("printf\t\t|%%|\n");

// 	ft_printf("ft_printf\t%hd\n", (short)32768);
// 	printf("printf\t%hd\n", (short)32768);

// 	ft_printf("ft_printf\t%hhd\n", (char)128);
// 	printf("printf\t%hhd\n", (char)128);


// 	ft_printf("ft_printf\t%hhd\n", 128);
// 	printf("printf\t%hhd\n", 128);


// 	ft_printf("ft_printf\t%hd\n", -129);
// 	printf("printf\t%hd\n", -129);


// 	ft_printf("ft_printf\t% u\n", 4294967295);
// 	printf("printf\t% u\n", 4294967295);


// 	ft_printf("ft_printf\t%+u\n", 4294967294);
// 	printf("printf\t%+u\n", 4294967294);


// ft_printf("ft_printf -0 : %.30  |\n", -2.L);
// printf("printf -0 : %.30   |\n", -2.L);


// ft_printf(" ft_printf :\t%.1150f\n", 0x1.59a8b0c3dp-1037);


//     ft_printf(" ft_printf :%lf|%-lf|%+lf|% lf|%#lf|%0lf\n", 38546.5849, 38546.5849, 38546.5849, 38546.5849, 38546.5849, 38546.5849);



//     ft_printf(" ft_printf :%.f|%.1f|%.2f|%.5f|%.12f\n", 0.000099, 0.000099, 0.000099, 0.000099, 0.000099);




// ft_printf("%.1150f|\n", 0x1p-1074);


// ft_printf("ft_printf LDBL_MIN : %.30Lf|\n", LDBL_MIN);
// printf("ft_printf LDBL_MIN : %.30Lf|\n", LDBL_MIN);



// ft_printf("ft_printf LDBL_MAX : %.30Lf|\n", LDBL_MAX);
// printf("ft_printf LDBL_MAX : %.30Lf|\n", LDBL_MAX);

// ft_printf("ft_printf\t%.f|%-.f|%+.f|% .f|%#.f|%0.f\n", 0., 0., 0., 0., 0., 0.);
// ft_printf("ft_printf +0.1L: %.5Lf|\n", +0.1L);
// ft_printf("ft_printf +15.0L: %.5Lf|\n", +15.0L);
// ft_printf("ft_printf +30L: %.5Lf|\n", (long double)30L);
// ft_printf("ft_printf +0L: %.5Lf|\n", (long double)0L);






// ft_printf("e|%-e|%+e|% e|%#e|%0e\n", INFINITY, INFINITY, INFINITY, INFINITY, INFINITY, INFINITY);


// ft_printf(" ft_printf :\t%-+8.14f|%- 8.14f|%-#8.14f|%-08.14f|%-+#8.14f|%-+ #08.14f", 0., 0., 0., 0., 0., 0.);




// ft_printf(" ft_printf :\t%.1150f\n", 0x1p-1074);



// ft_printf(" ft_printf :\t%.1150f\n", 0x1.ffffffffffffep-1023);



// ft_printf(" ft_printf :\t%.1150f\n", 0x1.4e46p-1058);



// ft_printf(" ft_printf :\t%.1150f\n", 0x1.59a8b0c3dp-1037);


 


// ft_printf(" ft_printf :|%.2147483649f|%2147483649f", 1.0, 1.0);


// 	ft_printf("    ft_printf 0.5 :|%.f", 0.5);
//     ft_printf("\n\n\n");
// 	ft_printf("    ft_printf 1.5 :|%.f", 1.5);
//     ft_printf("\n\n\n");
//     ft_printf("    ft_printf 2.5 :|%.f", 2.5);
//     ft_printf("\n\n\n");
//     ft_printf("    ft_printf 3.5 :|%.f", 3.5);
//     ft_printf("\n\n\n");
//     ft_printf("    ft_printf 4.5 :|%.f", 4.5);
//     ft_printf("\n\n\n");
    

//     ft_printf(" ft_printf 44.6 :|%.30f\n", 44.6);
	


//     ft_printf("sizeof(long double) %lu\n", sizeof(long double));







//     ft_printf(" ft_printf :|%Lf\n", (long double)LDBL_MIN);



    
//     ft_printf(" ft_printf :|%Lf\n", 1.5L);



//     ft_printf(" ft_printf :|%Lf\n", -1.5L);



//     ft_printf(" ft_printf :|%Lf\n", 1345.100L);



//     ft_printf(" ft_printf :|%Lf\n", -1345.100L);



// 	ft_printf(" ft_printf %%.14f of INFINITY :|%e|%-e|%+e|% e|%#e|%0e\n", INFINITY, INFINITY, INFINITY, INFINITY, INFINITY, INFINITY);
// 	printf(" printf %%.14f of INFINITY :|%e|%-e|%+e|% e|%#e|%0e\n", INFINITY, INFINITY, INFINITY, INFINITY, INFINITY, INFINITY);
//     ft_printf(" ft_printf :|%Lf\n", (long double)INFINITY);



//     ft_printf(" ft_printf :|%Lf\n", (long double)LDBL_MAX);



//     ft_printf(" ft_printf :|%5f|%-5f|%+5f|% 5f|%#5f|%05f\n", DBL_MAX, DBL_MAX, DBL_MAX, DBL_MAX, DBL_MAX, DBL_MAX);



//     ft_printf(" ft_printf :|e|%-f|%+f|% f|%#f|%0f\n", 0. / 0., 0. / 0., 0. / 0., 0. / 0., 0. / 0., 0. / 0.);



//     ft_printf(" ft_printf :|%5.8f|%-5.8f|%+5.8f|% 5.8f|%#5.8f|%05.8f\n", 0. / 0., 0. / 0., 0. / 0., 0. / 0., 0. / 0., 0. / 0.);



//     ft_printf(" ft_printf :|%5f|%-5f|%+5f|% 5f|%#5f|%05f\n", -INFINITY, -INFINITY, -INFINITY, -INFINITY, -INFINITY, -INFINITY);



// 	ft_printf(" ft_printf %%.14f of INFINITY :|%f|%-f|%+f|% f|%#f|%0f\n", INFINITY, INFINITY, INFINITY, INFINITY, INFINITY, INFINITY);



// 	ft_printf(" ft_printf %%.14f of -INFINITY :|%f|%-f|%+f|% f|%#f|%0f\n", -INFINITY, -INFINITY, -INFINITY, -INFINITY, -INFINITY, -INFINITY);




// 	ft_printf(" ft_printf %%.14f of 0. / 0 :|%f|%-f|%+f|% f|%#f|%0f\n", 0. / 0., 0. / 0., 0. / 0., 0. / 0., 0. / 0., 0. / 0.);



// 	ft_printf(" ft_printf %%.14f of DBL_MIN :|%f|%-f|%+f|% f|%#f|%0f\n", DBL_MIN, DBL_MIN, DBL_MIN, DBL_MIN, DBL_MIN, DBL_MIN);




// 	ft_printf(" ft_printf :|%.10e|%10.10e|%-10.10e\n", 9999.1222999, 9999.1222999, 9999.1222999);


// 	printf(" printf :|%.10e|%10.10e|%-10.10e\n", 9999.1222999, 9999.1222999, 9999.1222999);



// 	ft_printf(" ft_printf :|%.5e|%10.5e|%-10.5e\n", 9999.1222999, 9999.1222999, 9999.1222999);
// 	printf(" printf :|%.5e|%10.5e|%-10.5e\n", 9999.1222999, 9999.1222999, 9999.1222999);




// 	ft_printf(" ft_printf :|%.1e|%10.1e|%-10.1e\n", 9999.1222999, 9999.1222999, 9999.1222999);
// 	printf(" printf :|%.1e|%10.1e|%-10.1e\n", 9999.1222999, 9999.1222999, 9999.1222999);



// 	ft_printf(" ft_printf :|%.25f|\n", 0.6);




// 	ft_printf(" ft_printf :|%.0f|\n", 99.99);













//     ft_printf(" ft_printf :|%-c|%12c|%-12c\n", 1345, 1345, 1345, 1345);





//     ft_printf(" ft_printf :%#023o|%-#023o\n", UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);
	
//     ft_printf(" ft_printf :%#023o|%-#023o\n", ULONG_MAX, ULONG_MAX, ULONG_MAX, ULONG_MAX);

//     ft_printf(" ft_printf :%#023o|%-#023o\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);



//     ft_printf(" ft_printf :%.5hho|%-.5hho|%#.5hho|%0.5hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);


//     ft_printf(" ft_printf :%1.5hho|%-1.5hho|%#1.5hho|%01.5hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);


//     ft_printf(" ft_printf :%23.5hho|%-23.5hho|%#23.5hho|%023.5hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);


//     ft_printf(" ft_printf :%-#.5hho|%-0.5hho|%#0.5hho|%-#0.5hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);

//     ft_printf(" ft_printf :%-#1.5hho|%-01.5hho|%#01.5hho|%-#01.5hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);

//     ft_printf(" ft_printf :%-#23.5hho|%-023.5hho|%#023.5hho|%-#023.5hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);



//     ft_printf(" ft_printf :%#23.5hho|%023.5hho\n", ULLONG_MAX, ULLONG_MAX);

//     ft_printf(" ft_printf :%#23.5hho|%023.5hho\n", 0, 0);

//     ft_printf(" ft_printf :%#23.5hho|%023.5hho\n", 0, 0);

//     ft_printf(" ft_printf :%-#23hho|%-023hho|%#023hho|%-#023hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);

//     ft_printf(" ft_printf :%-#23X|%-023X|%#023X|%-#023X\n", ULONG_MAX, ULONG_MAX, ULONG_MAX, ULONG_MAX);



//     ft_printf(" ft_printf :%23X|%-23X|%#X|%023X\n", 0U, 0U, 0U, 0U);

//     ft_printf(" ft_printf :%#1.o|\n", 0U);

//     ft_printf(" ft_printf :%#23.5lX|%023.5lX\n", ULLONG_MAX, ULLONG_MAX);


//     ft_printf(" ft_printf :%-+hi|%- hi|%-0hi|%+ hi|%+0hi|% 0hi|%-+ 0hi\n", LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN);
//     ft_printf(" ft_printf :%.5hhx|%-.5hhx|%#.5hhx|%0.5hhx\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
//     ft_printf(" ft_printf :%.5hho|%-.5hho|%#.5hho|%0.5hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
//     ft_printf(" %%\n");

// 	printf("     Result: %d\n", ft_printf("{%            -d   }", 42));
// 	printf("     Result: %d\n\n", printf("{%            -d   }", 42));

// 	printf("     Result: %d\n", ft_printf("{%-10d}", 42));
// 	printf("     Result: %d\n\n", printf("{%-10d}", 42));

// 	printf("     Result: %d\n", ft_printf("%-10.5d", 4242));
// 	printf("     Result: %d\n\n", printf("%-10.5d", 4242));

// 	printf("     Result: %d\n", ft_printf("@moulitest: %.d %.0d", 42, 43));
// 	printf("     Result: %d\n\n", printf("@moulitest: %.d %.0d", 42, 43));

// 	printf("     Result: %d\n", ft_printf("%ll#x", 9223372036854775807));
// 	printf("     Result: %d\n\n", printf("%ll#x", 9223372036854775807));

// 	printf("     Result: %d\n", ft_printf("%lld%lld", 0, 42));
// 	printf("     Result: %d\n\n", printf("%lld%lld", 0, 42));

// 	printf("     Result: %d\n", ft_printf("%zhd", "4294967296"));
// 	printf("     Result: %d\n\n", printf("%zhd", "4294967296"));

// 	printf("     Result: %d\n", ft_printf("%lhl", "9223372036854775807"));
// 	printf("     Result: %d\n\n", printf("%lhl", "9223372036854775807"));

// 	printf("     Result: %d\n", ft_printf("%hhld", "128"));
// 	printf("     Result: %d\n\n", printf("%hhld", "128"));

// 	printf("     Result: %d\n", ft_printf("%hld", "128"));
// 	printf("     Result: %d\n\n", printf("%hld", "128"));

// 	printf("     Result: %d\n", ft_printf("%hhd", "128"));
// 	printf("     Result: %d\n\n", printf("%hhd", "128"));

// 	printf("     Result: %d\n", ft_printf("%+010d is a string", 42));
// 	printf("     Result: %d\n\n", printf("%+010d is a string", 42));

// 	printf("     Result: %d\n", ft_printf("{%+03d}", 0));
// 	printf("     Result: %d\n\n", printf("{%+03d}", 0));

// 	printf("     Result: %d\n", ft_printf("%5+d", 42));
// 	printf("     Result: %d\n\n", printf("%5+d", 42));

// 	printf("     Result: %d\n", ft_printf("%-0+5d", 42));
// 	printf("     Result: %d\n\n", printf("%-0+5d", 42));

// 	printf("     Result: %d\n", ft_printf("%-+10.5d", 4242));
// 	printf("     Result: %d\n\n", printf("%-+10.5d", 4242));

// 	printf("     Result: %d\n", ft_printf("@main_ftprintf: %-33.d\n", 256));
// 	printf("     Result: %d\n\n", printf("@main_ftprintf: %-33.d\n", 256));

// 	printf("     Result: %d\n", ft_printf("@main_ftprintf: %##-##0000 33...12..#00d", 256));
// 	printf("     Result: %d\n\n", printf("@main_ftprintf: %##-##0000 33...12..#00d", 256));

// 	printf("     Result: %d\n", ft_printf("@main_ftprintf: %###-#0000 33...12..#0+0d", 256));
// 	printf("     Result: %d\n\n", printf("@main_ftprintf: %###-#0000 33...12..#0+0d", 256));

// 	printf("     Result: %d\n", ft_printf("{%05.S}", L"42 c est cool"));
// 	printf("     Result: %d\n\n", printf("{%05.S}", L"42 c est cool"));

// 	printf("     Result: %d\n", ft_printf("%4.S", L"我是一只猫。"));
// 	printf("     Result: %d\n\n", printf("%4.S", L"我是一只猫。"));

// 	printf("     Result: %d\n", ft_printf("%hhC, %hhC", 0, L'米'));
// 	printf("     Result: %d\n\n", printf("%hhC, %hhC", 0, L'米'));


// 	printf("{%d}\n", printf("s% w %  10Z"));
// 	ft_printf("{%d}\n", ft_printf("s% w %  10Z"));
// 	ft_printf("s% Zoooo");
// 	printf("aaaa%   Zoooo\n");
// 	ft_printf("aaaa%   Zoooo");
// 	printf("\033[1;41m|----------------------------| (Lancement du test f en cours...) |----------------------------|\033[0m\n");
// 	printf("\033[1;32m|-----| LE VRAI |-----|\033[0m\n");
// 	printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|%f||%f|", 1.42, 1.42));
// 	printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|%f||%f|", -1.42, -1.42));
// 	printf("{%d}\n", printf("\033[1;32mTest 3 => \033[0m|%f||%f|", 1444565444646.6465424242242, 1444565444646.6465424242242));
// 	printf("{%d}\n", printf("\033[1;32mTest 4 => \033[0m|%f||%f|", -1444565444646.6465424242242454654, -1444565444646.6465424242242454654));
// 	printf("{%d}\n", printf("\033[1;32mTest 5 => \033[0m|%f||%f|", 0.0, 0.0));
// 	printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|% f||% f|", 42424242.4242424242424242, 424242424242.424242424242));
// 	printf("{%d}\n", printf("\033[1;32mTest 7 => \033[0m|%+f||%+f|", 42424242.4242424242424242, 424242424242.424242424242));
// 	printf("{%d}\n", printf("\033[1;32mTest 8 => \033[0m|%-5f||%-5f|", 42424242.4242424242424242, 424242424242.424242424242));
// 	printf("{%d}\n", printf("\033[1;32mTest 9 => \033[0m|%25.5f||%25.5f|", 42424242.4242424242424242, 424242424242.424242424242));
// 	printf("{%d}\n", printf("\033[1;32mTest 10 => \033[0m|%-25.5f||%-25.5f|", 42424242.4242424242424242, 424242424242.424242424242));
// 	printf("{%d}\n", printf("\033[1;32mTest 11 => \033[0m|%#f||%#f|", 42424242.4242424242424242, 424242424242.424242424242));
// 	printf("{%d}\n", printf("\033[1;32mTest 12 => \033[0m|%05f||%05f|", 42424242.4242424242424242, 424242424242.424242424242));
// 	printf("{%d}\n", printf("\033[1;32mTest 13 => \033[0m|%025f||%025f|", 42424242.4242424242424242, 424242424242.424242424242));
// 	printf("{%d}\n", printf("\033[1;32mTest 14 => \033[0m|%+025f||%+025f|", 42424242.4242424242424242, 424242424242.424242424242));
// 	printf("{%d}\n", printf("\033[1;32mTest 15 => \033[0m|%0.10f||%0.10f|", 42424242.4242424242424242, 424242424242.424242424242));
// 	printf("{%d}\n", printf("\033[1;32mTest 16 => \033[0m|%hhf||%hhf|", 42424242.4242424242424242, 424242424242.424242424242));
// 	printf("{%d}\n", printf("\033[1;32mTest 17 => \033[0m|%hf||%hf|", 42424242.4242424242424242, 424242424242.424242424242));
// 	printf("{%d}\n", printf("\033[1;32mTest 18 => \033[0m|%lf||%lf|", 42424242.4242424242424242, 424242424242.424242424242));
// 	printf("{%d}\n", printf("\033[1;32mTest 19 => \033[0m|%llf||%llf|", 42424242.4242424242424242, 424242424242.424242424242));
// 	printf("{%d}\n", printf("\033[1;32mTest 20 => \033[0m|%jf||%jf|", 42424242.4242424242424242, 424242424242.424242424242));
// 	printf("{%d}\n", printf("\033[1;32mTest 21 => \033[0m|%zf||%zf|", 42424242.4242424242424242, 424242424242.424242424242));
// 	ft_printf("\033[1;31m|-----| LE NOTRE |-----|\033[0m\n");
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 1 => \033[0m|%f||%f|", 1.42, 1.42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 2 => \033[0m|%f||%f|", -1.42, -1.42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3 => \033[0m|%f||%f|", 1444565444646.6465424242242, 1444565444646.6465424242242));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 4 => \033[0m|%f||%f|", -1444565444646.6465424242242454654, -1444565444646.6465424242242454654));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 5 => \033[0m|%f||%f|", 0.0, 0.0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 6 => \033[0m|% f||% f|", 42424242.4242424242424242, 424242424242.424242424242));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 7 => \033[0m|%+f||%+f|", 42424242.4242424242424242, 424242424242.424242424242));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 8 => \033[0m|%-5f||%-5f|", 42424242.4242424242424242, 424242424242.424242424242));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 9 => \033[0m|%25.5f||%25.5f|", 42424242.4242424242424242, 424242424242.424242424242));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 10 => \033[0m|%-25.5f||%-25.5f|", 42424242.4242424242424242, 424242424242.424242424242));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 11 => \033[0m|%#f||%#f|", 42424242.4242424242424242, 424242424242.424242424242));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 12 => \033[0m|%05f||%05f|", 42424242.4242424242424242, 424242424242.424242424242));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 13 => \033[0m|%025f||%025f|", 42424242.4242424242424242, 424242424242.424242424242));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 14 => \033[0m|%+025f||%+025f|", 42424242.4242424242424242, 424242424242.424242424242));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 15 => \033[0m|%0.10f||%0.10f|", 42424242.4242424242424242, 424242424242.424242424242));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 16 => \033[0m|%hhf||%hhf|", 42424242.4242424242424242, 424242424242.424242424242));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 17 => \033[0m|%hf||%hf|", 42424242.4242424242424242, 424242424242.424242424242));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 18 => \033[0m|%lf||%lf|", 42424242.4242424242424242, 424242424242.424242424242));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 19 => \033[0m|%llf||%llf|", 42424242.4242424242424242, 424242424242.424242424242));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 20 => \033[0m|%jf||%jf|", 42424242.4242424242424242, 424242424242.424242424242));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 21 => \033[0m|%zf||%zf|", 42424242.4242424242424242, 424242424242.424242424242));



// 	printf("\033[1;41m|----------------------------| (Lancement du test bullshit en cours...) |----------------------------|\033[0m\n");
// 	printf("\033[1;32m|-----| LE VRAI |-----|\033[0m\n");
// 	ft_printf("\033[1;31m|-----| LE NOTRE |-----|\033[0m\n");
// 	printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|%|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 1 => \033[0m|%|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|% |"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 2 => \033[0m|% |"));
// 	printf("{%d}\n", printf("\033[1;32mTest 3 => \033[0m|% h|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3 => \033[0m|% h|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 4 => \033[0m|%h|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 4 => \033[0m|%h|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 5 => \033[0m|%Z|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 5 => \033[0m|%Z|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|% hZ|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 6 => \033[0m|% hZ|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 7 => \033[0m|% hZ%|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 7 => \033[0m|% hZ%|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 8 => \033[0m|% Z|", "test"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 8 => \033[0m|% Z|", "test"));
// 	printf("{%d}\n", printf("\033[1;32mTest 9 => \033[0m|% Z |", "test"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 9 => \033[0m|% Z |", "test"));
// 	printf("{%d}\n", printf("\033[1;32mTest 10 => \033[0m|% Z%s|", "test"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 10 => \033[0m|% Z%s|", "test"));
// 	printf("{%d}\n", printf("\033[1;32mTest 11 => \033[0m|%%%|", "test"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 11 => \033[0m|%%%|", "test"));
// 	printf("{%d}\n", printf("\033[1;32mTest 12 => \033[0m|%%   %|", "test"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 12 => \033[0m|%%   %|", "test"));
// 	printf("{%d}\n", printf("\033[1;32mTest 13 => \033[0m|%ll#x|", 9223372036854775807));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 13 => \033[0m|%ll#x|", 9223372036854775807));
// 	printf("{%d}\n", printf("\033[1;32mTest 14 => \033[0m|%010s is a string|", "this"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 14 => \033[0m|%010s is a string|", "this"));
// 	printf("{%d}\n", printf("\033[1;32mTest 15 => \033[0m|%05c|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 15 => \033[0m|%05c|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 16 => \033[0m|% Z|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 16 => \033[0m|% Z|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 17 => \033[0m|%5+d|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 17 => \033[0m|%5+d|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 18 => \033[0m|%5+d|", -42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 18 => \033[0m|%5+d|", -42));
// 	printf("{%d}\n", printf("\033[1;32mTest 19 => \033[0m|%-5+d|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 19 => \033[0m|%-5+d|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 20 => \033[0m|%-5+d|", -42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 20 => \033[0m|%-5+d|", -42));
// 	printf("{%d}\n", printf("\033[1;32mTest 21 => \033[0m|%zhd|", "4294967296"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 21 => \033[0m|%zhd|", "4294967296"));
// 	printf("{%d}\n", printf("\033[1;32mTest 22 => \033[0m|%jzd|", "9223372036854775807"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 22 => \033[0m|%jzd|", "9223372036854775807"));
// 	printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%jhd|", "9223372036854775807"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 23 => \033[0m|%jhd|", "9223372036854775807"));
// 	printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%lhl|", "9223372036854775807"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 24 => \033[0m|%lhl|", "9223372036854775807"));
// 	printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%lhlz|", "9223372036854775807"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 25 => \033[0m|%lhlz|", "9223372036854775807"));
// 	printf("{%d}\n", printf("\033[1;32mTest 26 => \033[0m|%zj|", "9223372036854775807"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 26 => \033[0m|%zj|", "9223372036854775807"));
// 	printf("{%d}\n", printf("\033[1;32mTest 27 => \033[0m|%lhh|", "2147483647"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 27 => \033[0m|%lhh|", "2147483647"));
// 	printf("{%d}\n", printf("\033[1;32mTest 28 => \033[0m|%hhld|", "128"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 28 => \033[0m|%hhld|", "128"));
// 	printf("{%d}\n", printf("\033[1;32mTest 29 => \033[0m@main_ftprintf: |%####000033..1..#00d|", 256));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 29 => \033[0m@main_ftprintf: |%####000033..1..#00d|", 256));
// 	printf("{%d}\n", printf("\033[1;32mTest 30 => \033[0m@main_ftprintf: |%####000033..1d|", 256));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 30 => \033[0m@main_ftprintf: |%####000033..1d|", 256));
// 	printf("{%d}\n", printf("\033[1;32mTest 31 => \033[0m@main_ftprintf: |%###-#000033...12..#0+0d|", 256));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 31 => \033[0m@main_ftprintf: |%###-#000033...12..#0+0d|", 256));
// 	printf("{%d}\n", printf("\033[1;32mTest 32 => \033[0m@main_ftprintf: |%33d|", 256));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 32 => \033[0m@main_ftprintf: |%33d|", 256));
// 	printf("{%d}\n", printf("\033[1;32mTest 33 => \033[0m@main_ftprintf: |%+33d|", 256));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 33 => \033[0m@main_ftprintf: |%+33d|", 256));
// 	printf("{%d}\n", printf("\033[1;32mTest 34 => \033[0m@main_ftprintf: |%-+33d|", 256));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 34 => \033[0m@main_ftprintf: |%-+33d|", 256));
// 	printf("{%d}\n", printf("\033[1;32mTest 35 => \033[0m@main_ftprintf: |%-+33.d|", 256));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 35 => \033[0m@main_ftprintf: |%-+33.d|", 256));
// 	int i;

// 	i = 42;

// 	printf("\n\033[1;32m|-----| LE VRAI |-----|\033[0m\n");
// 	ft_printf("\033[1;31m|-----| LE NOTRE |-----|\033[0m\n");
// 	printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|s: %s, p: %p, d:%d|", "a string", &i, 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 1 => \033[0m|s: %s, p: %p, d:%d|", "a string", &i, 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|%10RR|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 2 => \033[0m|%10RR|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 3 => \033[0m|%#10RR|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3 => \033[0m|%#10RR|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 4 => \033[0m|%010RR|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 4 => \033[0m|%010RR|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 5 => \033[0m|%+10RR|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 5 => \033[0m|%+10RR|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%-10RR|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 6 => \033[0m|%-10RR|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 7 => \033[0m|%#10.5RR|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 7 => \033[0m|%#10.5RR|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 8 => \033[0m|%010.5RR|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 8 => \033[0m|%010.5RR|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 9 => \033[0m|%+10.5RR|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 9 => \033[0m|%+10.5RR|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 10 => \033[0m|%-10.5RR|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 10 => \033[0m|%-10.5RR|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 11 => \033[0m|%d|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 11 => \033[0m|%d|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 12 => \033[0m@moulitest: |%#.1x %#.10x|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 12 => \033[0m@moulitest: |%#.1x %#.10x|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 13 => \033[0m@moulitest: |%#.x %#.0x|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 13 => \033[0m@moulitest: |%#.x %#.0x|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 14 => \033[0m@moulitest: |%.x %.0x|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 14 => \033[0m@moulitest: |%.x %.0x|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 15 => \033[0m@moulitest: |%5.x %5.0x|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 15 => \033[0m@moulitest: |%5.x %5.0x|", 0, 0));


// 	printf("\033[1;41m|-------------------------| (Lancement du test LETTRE en cours...) |-------------------------|\033[0m\n");
// 	printf("\033[1;32m|-----| LE VRAI |-----|\033[0m\n");
// 	ft_printf("\033[1;31m|-----| LE NOTRE |-----|\033[0m\n");
// 	printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|%05.c|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 1 => \033[0m|%05.c|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|%05.c|", 'a'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 2 => \033[0m|%05.c|", 'a'));
// 	printf("{%d}\n", printf("\033[1;32mTest 3 => \033[0m|%c|", '4'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3 => \033[0m|%c|", '4'));
// 	printf("{%d}\n", printf("\033[1;32mTest 4 => \033[0m|%hhc|", '4'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 4 => \033[0m|%hhc|", '4'));
// 	printf("{%d}\n", printf("\033[1;32mTest 5 => \033[0m|%hc|", '4'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 5 => \033[0m|%hc|", '4'));
// 	printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%llc|", '4'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 6 => \033[0m|%llc|", '4'));
// 	printf("{%d}\n", printf("\033[1;32mTest 7 => \033[0m|%jc|", '4'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 7 => \033[0m|%jc|", '4'));
// 	printf("{%d}\n", printf("\033[1;32mTest 8 => \033[0m|%zc|", '4'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 8 => \033[0m|%zc|", '4'));
// 	printf("{%d}\n", printf("\033[1;32mTest 9 => \033[0m|%+c|", 'a'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 9 => \033[0m|%+c|", 'a'));
// 	printf("{%d}\n", printf("\033[1;32mTest 10 => \033[0m|%#c|", 'a'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 10 => \033[0m|%#c|", 'a'));
// 	printf("{%d}\n", printf("\033[1;32mTest 11 => \033[0m|%c|", '4'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 11 => \033[0m|%c|", '4'));
// 	printf("{%d}\n", printf("\033[1;32mTest 12 => \033[0m|%-c|", '4'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 12 => \033[0m|%-c|", '4'));
// 	printf("{%d}\n", printf("\033[1;32mTest 13 => \033[0m|%15c|", '4'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 13 => \033[0m|%15c|", '4'));
// 	printf("{%d}\n", printf("\033[1;32mTest 14 => \033[0m|%-15c|", '4'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 14 => \033[0m|%-15c|", '4'));
// 	printf("{%d}\n", printf("\033[1;32mTest 15 => \033[0m|%.2c|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 15 => \033[0m|%.2c|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 16 => \033[0m|% c|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 16 => \033[0m|% c|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 17 => \033[0m|%c|", "coucou"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 17 => \033[0m|%c|", "coucou"));
// 	printf("{%d}\n", printf("\033[1;32mTest 18 => \033[0m|%05.c|", 'a'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 18 => \033[0m|%05.c|", 'a'));
// 	printf("{%d}\n", printf("\033[1;32mTest 19 => \033[0m|%015c|", '4'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 19 => \033[0m|%015c|", '4'));
// 	printf("{%d}\n", printf("\033[1;32mTest 20 => \033[0m|%-015c|", '4'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 20 => \033[0m|%-015c|", '4'));
// 	printf("{%d}\n", printf("\033[1;32mTest 21 => \033[0m|%-0c|", '4'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 21 => \033[0m|%-0c|", '4'));
// 	printf("{%d}\n", printf("\033[1;32mTest 22 => \033[0m|%.12c|", '4'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 22 => \033[0m|%.12c|", '4'));
// 	printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%.0c|", '4'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 23 => \033[0m|%.0c|", '4'));
// 	printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%-12.3c|", '4'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 24 => \033[0m|%-12.3c|", '4'));
// 	printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%-3.1c|", 'a'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 25 => \033[0m|%-3.1c|", 'a'));
// 	printf("{%d}\n", printf("\033[1;32mTest 26 => \033[0m|%12.1c|", 'a'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 26 => \033[0m|%12.1c|", 'a'));
// 	printf("{%d}\n", printf("\033[1;32mTest 27 => \033[0m|%3.1c|", '4'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 27 => \033[0m|%3.1c|", '4'));
// 	printf("{%d}\n", printf("\033[1;32mTest 28 => \033[0m|%-c|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 28 => \033[0m|%-c|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 29 => \033[0m|%3c|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 29 => \033[0m|%3c|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 30 => \033[0m|%-3c|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 30 => \033[0m|%-3c|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 31 => \033[0m|%.2c|", 'a'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 31 => \033[0m|%.2c|", 'a'));
// 	printf("{%d}\n", printf("\033[1;32mTest 32 => \033[0m|%5.5c|", "N"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 32 => \033[0m|%5.5c|", "N"));
// 	printf("{%d}\n", printf("\033[1;32mTest 33 => \033[0m|%7.5c|", "Number 42"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 33 => \033[0m|%7.5c|", "Number 42"));
// 	printf("{%d}\n", printf("\033[1;32mTest 34 => \033[0m|%.5c|", "Number 42"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 34 => \033[0m|%.5c|", "Number 42"));
// 	printf("{%d}\n", printf("\033[1;32mTest 35 => \033[0m|%.15c|", "Number 42"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 35 => \033[0m|%.15c|", "Number 42"));
// 	printf("{%d}\n", printf("\033[1;32mTest 36 => \033[0m|%15c|", "Number 42"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 36 => \033[0m|%15c|", "Number 42"));
// 	printf("{%d}\n", printf("\033[1;32mTest 37 => \033[0m|%5c|", "Number 42"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 37 => \033[0m|%5c|", "Number 42"));
// 	printf("{%d}\n", printf("\033[1;32mTest 38 => \033[0m|%-5.5c|", "Number 42"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 38 => \033[0m|%-5.5c|", "Number 42"));
// 	printf("{%d}\n", printf("\033[1;32mTest 39 => \033[0m|%-15.5c|", "Number 42"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 39 => \033[0m|%-15.5c|", "Number 42"));
// 	printf("{%d}\n", printf("\033[1;32mTest 40 => \033[0m|%-.5c|", "Number 42"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 40 => \033[0m|%-.5c|", "Number 42"));
// 	printf("{%d}\n", printf("\033[1;32mTest 41 => \033[0m|%-15c|", "Number 42"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 41 => \033[0m|%-15c|", "Number 42"));
// 	printf("{%d}\n", printf("\033[1;32mTest 42 => \033[0m|%c|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 42 => \033[0m|%c|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 43 => \033[0m|%-c|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 43 => \033[0m|%-c|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 44 => \033[0m|%5.5c|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 44 => \033[0m|%5.5c|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 45 => \033[0m|%15.5c|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 45 => \033[0m|%15.5c|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 46 => \033[0m|%.5c|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 46 => \033[0m|%.5c|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 47 => \033[0m|%15c|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 47 => \033[0m|%15c|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 48 => \033[0m|%-5.5c|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 48 => \033[0m|%-5.5c|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 49 => \033[0m|%-15.5c|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 49 => \033[0m|%-15.5c|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 50 => \033[0m|%-.5c|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 50 => \033[0m|%-.5c|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 51 => \033[0m|%-15c|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 51 => \033[0m|%-15c|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 52 => \033[0m|%15c|", "bonjour"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 52 => \033[0m|%15c|", "bonjour"));


// 	printf("\033[1;41m|-------------------------| (Lancement du test STRING en cours...) |-------------------------|\033[0m\n");
// 	printf("\033[1;32m|-----| LE VRAI |-----|\033[0m\n");
// 	ft_printf("\033[1;31m|-----| LE NOTRE |-----|\033[0m\n");
// 	printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|%05.s|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 1 => \033[0m|%05.s|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|%05.s|", "42"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 2 => \033[0m|%05.s|", "42"));
// 	printf("{%d}\n", printf("\033[1;32mTest 2b => \033[0m|%05.2s|", "42"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 2b => \033[0m|%05.2s|", "42"));
// 	printf("{%d}\n", printf("\033[1;32mTest 3 => \033[0m|%s|", "salut"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3 => \033[0m|%s|", "salut"));
// 	printf("{%d}\n", printf("\033[1;32mTest 4 => \033[0m|%hhs|", "salut"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 4 => \033[0m|%hhs|", "salut"));
// 	printf("{%d}\n", printf("\033[1;32mTest 5 => \033[0m|%hs|", "salut"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 5 => \033[0m|%hs|", "salut"));
// 	printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%lls|", "salut"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 6 => \033[0m|%lls|", "salut"));
// 	printf("{%d}\n", printf("\033[1;32mTest 7 => \033[0m|%js|", "salut"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 7 => \033[0m|%js|", "salut"));
// 	printf("{%d}\n", printf("\033[1;32mTest 8 => \033[0m|%zs|", "salut"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 8 => \033[0m|%zs|", "salut"));
// 	printf("{%d}\n", printf("\033[1;32mTest 9 => \033[0m|% s|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 9 => \033[0m|% s|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 10 => \033[0m|%+s|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 10 => \033[0m|%+s|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 11 => \033[0m|%#s|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 11 => \033[0m|%#s|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 12 => \033[0m|%#s|", "hola"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 12 => \033[0m|%#s|", "hola"));
// 	printf("{%d}\n", printf("\033[1;32mTest 13 => \033[0m|%s|", "Number 42"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 13 => \033[0m|%s|", "Number 42"));
// 	printf("{%d}\n", printf("\033[1;32mTest 14 => \033[0m|%-s|", "Number 42"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 14 => \033[0m|%-s|", "Number 42"));
// 	printf("{%d}\n", printf("\033[1;32mTest 15 => \033[0m|%5.5s|", "Number 42"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 15 => \033[0m|%5.5s|", "Number 42"));
// 	printf("{%d}\n", printf("\033[1;32mTest 16 => \033[0m|%15.5s|", "Number 42"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 16 => \033[0m|%15.5s|", "Number 42"));
// 	printf("{%d}\n", printf("\033[1;32mTest 17 => \033[0m|%.5s|", "Number 42"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 17 => \033[0m|%.5s|", "Number 42"));
// 	printf("{%d}\n", printf("\033[1;32mTest 17b => \033[0m|%.15s|", "Number 42"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 17b => \033[0m|%.15s|", "Number 42"));
// 	printf("{%d}\n", printf("\033[1;32mTest 18 => \033[0m|%15s|", "Number 42"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 18 => \033[0m|%15s|", "Number 42"));
// 	printf("{%d}\n", printf("\033[1;32mTest 18b => \033[0m|%5s|", "Number 42"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 18b => \033[0m|%5s|", "Number 42"));
// 	printf("{%d}\n", printf("\033[1;32mTest 19 => \033[0m|%-5.5s|", "Number 42"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 19 => \033[0m|%-5.5s|", "Number 42"));
// 	printf("{%d}\n", printf("\033[1;32mTest 20 => \033[0m|%-15.5s|", "Number 42"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 20 => \033[0m|%-15.5s|", "Number 42"));
// 	printf("{%d}\n", printf("\033[1;32mTest 21 => \033[0m|%-.5s|", "Number 42"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 21 => \033[0m|%-.5s|", "Number 42"));
// 	printf("{%d}\n", printf("\033[1;32mTest 22 => \033[0m|%-15s|", "Number 42"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 22 => \033[0m|%-15s|", "Number 42"));
// 	printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%s|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 23 => \033[0m|%s|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%-s|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 24 => \033[0m|%-s|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%5.5s|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 25 => \033[0m|%5.5s|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 26 => \033[0m|%15.5s|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 26 => \033[0m|%15.5s|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 27 => \033[0m|%.5s|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 27 => \033[0m|%.5s|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 28 => \033[0m|%15s|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 28 => \033[0m|%15s|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 29 => \033[0m|%-5.5s|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 29 => \033[0m|%-5.5s|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 30 => \033[0m|%-15.5s|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 30 => \033[0m|%-15.5s|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 31 => \033[0m|%-.5s|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 31 => \033[0m|%-.5s|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 32 => \033[0m|%-15s|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 32 => \033[0m|%-15s|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 33 => \033[0m|%s|", "coucou"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 33 => \033[0m|%s|", "coucou"));
// 	printf("{%d}\n", printf("\033[1;32mTest 34 => \033[0m|%05.s|", "salut"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 34 => \033[0m|%05.s|", "salut"));
// 	printf("{%d}\n", printf("\033[1;32mTest 34b => \033[0m|%5.s|", "salut"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 34b => \033[0m|%5.s|", "salut"));
// 	printf("{%d}\n", printf("\033[1;32mTest 35 => \033[0m|%015s|", "salut"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 35 => \033[0m|%015s|", "salut"));
// 	printf("{%d}\n", printf("\033[1;32mTest 36 => \033[0m|%-015s|", "salut"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 36 => \033[0m|%-015s|", "salut"));
// 	printf("{%d}\n", printf("\033[1;32mTest 37 => \033[0m|%-0s|", "salut"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 37 => \033[0m|%-0s|", "salut"));
// 	printf("{%d}\n", printf("\033[1;32mTest 38 => \033[0m|%.12s|", "salut"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 38 => \033[0m|%.12s|", "salut"));
// 	printf("{%d}\n", printf("\033[1;32mTest 39 => \033[0m|%.0s|", "salut"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 39 => \033[0m|%.0s|", "salut"));
// 	printf("{%d}\n", printf("\033[1;32mTest 40 => \033[0m|%-12.1s|", "salut"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 40 => \033[0m|%-12.1s|", "salut"));
// 	printf("{%d}\n", printf("\033[1;32mTest 41 => \033[0m|%-3.2s|", "salut"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 41 => \033[0m|%-3.2s|", "salut"));
// 	printf("{%d}\n", printf("\033[1;32mTest 42 => \033[0m|%12.1s|", "salut"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 42 => \033[0m|%12.1s|", "salut"));
// 	printf("{%d}\n", printf("\033[1;32mTest 43 => \033[0m|%3.2s|", "salut"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 43 => \033[0m|%3.2s|", "salut"));
// 	printf("{%d}\n", printf("\033[1;32mTest 44 => \033[0m|%-s|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 44 => \033[0m|%-s|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 45 => \033[0m|%3s|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 45 => \033[0m|%3s|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 46 => \033[0m|%-3s|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 46 => \033[0m|%-3s|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 47 => \033[0m|%.2s|", "salut"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 47 => \033[0m|%.2s|", "salut"));


// 	printf("\033[1;41m|-----------------------| (Lancement du test POINTEUR en cours...) |-----------------------|\033[0m\n");
// 	i = 42;
// 	printf("\033[1;32m|-----| LE VRAI |-----|\033[0m\n");
// 	ft_printf("\033[1;31m|-----| LE NOTRE |-----|\033[0m\n");
// 	printf("{%d}\n", printf("\033[1;32mTest 0 => \033[0m|%5p|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 0 => \033[0m|%5p|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|%05p|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 1 => \033[0m|%05p|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|%9.2p|", 1234));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 2 => \033[0m|%9.2p|", 1234));
// 	printf("{%d}\n", printf("\033[1;32mTest 3 => \033[0m|%#9.2p|", 1234));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3 => \033[0m|%#9.2p|", 1234));
// 	printf("{%d}\n", printf("\033[1;32mTest 4 => \033[0m|%.0p|, |%.p|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 4 => \033[0m|%.0p|, |%.p|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 5 => \033[0m|%.1p|, |%.2p|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 5 => \033[0m|%.1p|, |%.2p|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%.3p|, |%.5p|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 6 => \033[0m|%.3p|, |%.5p|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 7 => \033[0m|%10.5p|, |%5.10p|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 7 => \033[0m|%10.5p|, |%5.10p|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 8 => \033[0m|%-10.5p|, |%-5.10p|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 8 => \033[0m|%-10.5p|, |%-5.10p|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 7b => \033[0m|%10.5p|, |%5.10p|", 42, 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 7b => \033[0m|%10.5p|, |%5.10p|", 42, 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 8b => \033[0m|%-10.5p|, |%-5.10p|", 42, 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 8b => \033[0m|%-10.5p|, |%-5.10p|", 42, 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 9 => \033[0m|%p|", &i));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 9 => \033[0m|%p|", &i));
// 	printf("{%d}\n", printf("\033[1;32mTest 10 => \033[0m|%-5p|", &i));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 10 => \033[0m|%-5p|", &i));
// 	printf("{%d}\n", printf("\033[1;32mTest 11 => \033[0m|%p|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 11 => \033[0m|%p|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 12 => \033[0m|%lp|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 12 => \033[0m|%lp|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 13 => \033[0m|%5p|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 13 => \033[0m|%5p|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 14 => \033[0m|%.0p|, |%.p|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 14 => \033[0m|%.0p|, |%.p|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 15 => \033[0m|%.1p|, |%.2p|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 15 => \033[0m|%.1p|, |%.2p|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 16 => \033[0m|%.3p|, |%.5p|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 16 => \033[0m|%.3p|, |%.5p|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 17 => \033[0m|%10.5p|, |%10.5p|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 17 => \033[0m|%10.5p|, |%10.5p|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 18 => \033[0m|%-10.5p|, |%-10.5p|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 18 => \033[0m|%-10.5p|, |%-10.5p|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 19 => \033[0m|%p|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 19 => \033[0m|%p|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 20 => \033[0m|%-5p|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 20 => \033[0m|%-5p|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 21 => \033[0m|%p|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 21 => \033[0m|%p|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 22 => \033[0m|%5p|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 22 => \033[0m|%5p|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%#05p|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 23 => \033[0m|%#05p|",42));
// 	printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%#05p|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 24 => \033[0m|%#05p|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%#5p|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 25 => \033[0m|%#5p|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 26 => \033[0m|%#-5p|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 26 => \033[0m|%-#5p|", 0));


// 	printf("\033[1;41m|-----------------------| (Lancement du test HEXADECIMAL en cours...) |-----------------------|\033[0m\n");
// 	printf("\033[1;32m|-----| LE VRAI |-----|\033[0m\n");
// 	ft_printf("\033[1;31m|-----| LE NOTRE |-----|\033[0m\n");
// 	printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|%+x|", (unsigned int)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 1 => \033[0m|%+x|", (unsigned int)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|% x|", (unsigned int)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 2 => \033[0m|% x|", (unsigned int)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 3 => \033[0m|%x|", (unsigned int)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3 => \033[0m|%x|", (unsigned int)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 4 => \033[0m|%hhx|", (unsigned char)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 4 => \033[0m|%hhx|", (unsigned char)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 5 => \033[0m|%hx|", (unsigned short)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 5 => \033[0m|%hx|", (unsigned short)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%lx|", (unsigned long)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 6 => \033[0m|%lx|", (unsigned long)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 7 => \033[0m|%llx|", (unsigned long long)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 7 => \033[0m|%llx|", (unsigned long long)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 8 => \033[0m|%jx|", (uintmax_t)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 8 => \033[0m|%jx|", (uintmax_t)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 9 => \033[0m|%zx|", (size_t)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 9 => \033[0m|%zx|", (size_t)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 10 => \033[0m|%X|", (unsigned int)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 10 => \033[0m|%X|", (unsigned int)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 11 => \033[0m|%hhX|", (unsigned char)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 11 => \033[0m|%hhX|", (unsigned char)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 12 => \033[0m|%hX|", (unsigned short)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 12 => \033[0m|%hX|", (unsigned short)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 13 => \033[0m|%lX|", (unsigned long)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 13 => \033[0m|%lX|", (unsigned long)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 14 => \033[0m|%llX|", (unsigned long long)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 14 => \033[0m|%llX|", (unsigned long long)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 15 => \033[0m|%jX|", (uintmax_t)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 15 => \033[0m|%jX|", (uintmax_t)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 16 => \033[0m|%zX|", (size_t)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 16 => \033[0m|%zX|", (size_t)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 17 => \033[0m|%#12x|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 17 => \033[0m|%#12x|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 18 => \033[0m|%#2x|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 18 => \033[0m|%#2x|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 19 => \033[0m|%#5X|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 19 => \033[0m|%#5X|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 20 => \033[0m|%#2X|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 20 => \033[0m|%#2X|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 21 => \033[0m|%-5x|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 21 => \033[0m|%-5x|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 22 => \033[0m|%6.9x|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 22 => \033[0m|%6.9x|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%-9.5x|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 23 => \033[0m|%-9.5x|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%#-9.5x|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 24 => \033[0m|%#-9.5x|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%#9.5x|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 25 => \033[0m|%#9.5x|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 26 => \033[0m|%#-9.5x|", 2));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 26 => \033[0m|%#-9.5x|", 2));
// 	printf("{%d}\n", printf("\033[1;32mTest 27 => \033[0m|%#9.5x|", 2));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 27 => \033[0m|%#9.5x|", 2));
// 	printf("{%d}\n", printf("\033[1;32mTest 28 => \033[0m|%-9.1x|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 28 => \033[0m|%-9.1x|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 29 => \033[0m|%05x|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 29 => \033[0m|%05x|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 30 => \033[0m|%0.5x|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 30 => \033[0m|%0.5x|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 31 => \033[0m|%.5x|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 31 => \033[0m|%.5x|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 32 => \033[0m|%09.5x|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 32 => \033[0m|%09.5x|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 33 => \033[0m|%09.3x|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 33 => \033[0m|%09.3x|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 34 => \033[0m|%09.2x|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 34 => \033[0m|%09.2x|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 35 => \033[0m|%#-9.5x|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 35 => \033[0m|%#-9.5x|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 36 => \033[0m|%#.x, %#.0x|", 0, 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 36 => \033[0m|%#.x, %#.0x|", 0, 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 37 => \033[0m|%.x, %.2x|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 37 => \033[0m|%.x, %.2x|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 38 => \033[0m|%.x, %.0x|", 42, 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 38 => \033[0m|%.x, %.0x|", 42, 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 39 => \033[0m|%.x, %.2x|", 42, 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 39 => \033[0m|%.x, %.2x|", 42, 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 40 => \033[0m|%.x, %.2x, %x|", 0, -02, 02));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 40 => \033[0m|%.x, %.2x, %x|", 0, -02, 02));
// 	printf("{%d}\n", printf("\033[1;32mTest 41 => \033[0m|%05x|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 41 => \033[0m|%05x|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 42 => \033[0m|%9.2x|", 1234));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 42 => \033[0m|%9.2x|", 1234));
// 	printf("{%d}\n", printf("\033[1;32mTest 43 => \033[0m|%#9.2x|", 1234));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 43 => \033[0m|%#9.2x|", 1234));
// 	printf("{%d}\n", printf("\033[1;32mTest 44 => \033[0m|%.0x|, |%.x|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 44 => \033[0m|%.0x|, |%.x|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 45 => \033[0m|%.1x|, |%.1x|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 45 => \033[0m|%.1x|, |%.1x|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 46 => \033[0m|%.5x|, |%.5x|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 46 => \033[0m|%.5x|, |%.5x|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 47 => \033[0m|%10.5x|, |%10.5x|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 47 => \033[0m|%10.5x|, |%10.5x|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 48 => \033[0m|%-10.5x|, |%-10.5x|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 48 => \033[0m|%-10.5x|, |%-10.5x|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 49 => \033[0m|%x|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 49 => \033[0m|%x|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 50 => \033[0m|%-5x|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 50 => \033[0m|%-5x|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 51 => \033[0m|%x|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 51 => \033[0m|%x|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 52 => \033[0m|%5x|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 52 => \033[0m|%5x|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 53 => \033[0m|%#05x|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 53 => \033[0m|%#05x|",42));
// 	printf("{%d}\n", printf("\033[1;32mTest 54 => \033[0m|%#05x|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 54 => \033[0m|%#05x|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 55 => \033[0m|%#5x|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 55 => \033[0m|%#5x|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 56 => \033[0m|%-#5x|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 56 => \033[0m|%-#5x|", 0));


// 	printf("\033[1;41m|-----------------------| (Lancement du test OCTAL en cours...) |-----------------------|\033[0m\n");
// 	printf("\033[1;32m|-----| LE VRAI |-----|\033[0m\n");
// 	ft_printf("\033[1;31m|-----| LE NOTRE |-----|\033[0m\n");
// 	printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|% o|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 1 => \033[0m|% o|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|%+o|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 2 => \033[0m|%+o|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 3 => \033[0m|%#o|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3 => \033[0m|%#o|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 4 => \033[0m|%#.o|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 4 => \033[0m|%#.o|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 5 => \033[0m|%#.o|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 5 => \033[0m|%#.o|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%o|", (unsigned int)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 6 => \033[0m|%o|", (unsigned int)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 7 => \033[0m|%hho|", (unsigned char)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 7 => \033[0m|%hho|", (unsigned char)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 8 => \033[0m|%ho|", (unsigned short)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 8 => \033[0m|%ho|", (unsigned short)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 9 => \033[0m|%lo|", (unsigned long)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 9 => \033[0m|%lo|", (unsigned long)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 10 => \033[0m|%llo|", (unsigned long long)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 10 => \033[0m|%llo|", (unsigned long long)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 11 => \033[0m|%jo|", (uintmax_t)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 11 => \033[0m|%jo|", (uintmax_t)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 12 => \033[0m|%zo|", (size_t)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 12 => \033[0m|%zo|", (size_t)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 13 => \033[0m|%O|", (unsigned int)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 13 => \033[0m|%O|", (unsigned int)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 14 => \033[0m|%hhO|", (unsigned char)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 14 => \033[0m|%hhO|", (unsigned char)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 15 => \033[0m|%hO|", (unsigned short)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 15 => \033[0m|%hO|", (unsigned short)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 16 => \033[0m|%lO|", (unsigned long)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 16 => \033[0m|%lO|", (unsigned long)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 17 => \033[0m|%llO|", (unsigned long long)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 17 => \033[0m|%llO|", (unsigned long long)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 18 => \033[0m|%jO|", (uintmax_t)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 18 => \033[0m|%jO|", (uintmax_t)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 19 => \033[0m|%zO|", (size_t)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 19 => \033[0m|%zO|", (size_t)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 20 => \033[0m|%#5o|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 20 => \033[0m|%#5o|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 20b => \033[0m|%#8o|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 20b => \033[0m|%#8o|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 21 => \033[0m|%-5o|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 21 => \033[0m|%-5o|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 22 => \033[0m|%6.9o|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 22 => \033[0m|%6.9o|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%-9.5o|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 23 => \033[0m|%-9.5o|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%#-9.5o|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 24 => \033[0m|%#-9.5o|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%-9.1o|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 25 => \033[0m|%-9.1o|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 26 => \033[0m|%05o|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 26 => \033[0m|%05o|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 27 => \033[0m|%0.5o|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 27 => \033[0m|%0.5o|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 28 => \033[0m|%.5o|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 28 => \033[0m|%.5o|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 29 => \033[0m|%09.5o|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 29 => \033[0m|%09.5o|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 30 => \033[0m|%09.3o|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 30 => \033[0m|%09.3o|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 31 => \033[0m|%09.2o|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 31 => \033[0m|%09.2o|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 32 => \033[0m|%o|", -1));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 32 => \033[0m|%o|", -1));
// 	printf("{%d}\n", printf("\033[1;32mTest 33 => \033[0m|%#9.o|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 33 => \033[0m|%#9.o|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 34 => \033[0m|%.o, %.0o|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 34 => \033[0m|%.o, %.0o|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 35 => \033[0m|%.o, %.2o|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 35 => \033[0m|%.o, %.2o|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 36 => \033[0m|%.o, %.0o|", 42, 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 36 => \033[0m|%.o, %.0o|", 42, 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 37 => \033[0m|%.o, %.2o|", 42, 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 37 => \033[0m|%.o, %.2o|", 42, 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 38 => \033[0m|%.o, %.0o|", 42, 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 38 => \033[0m|%.o, %.0o|", 42, 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 39 => \033[0m|%.o, %.2o|", 42, 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 39 => \033[0m|%.o, %.2o|", 42, 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 40 => \033[0m|%.o, %.2o, %o|", 0, -02, 02));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 40 => \033[0m|%.o, %.2o, %o|", 0, -02, 02));
// 	printf("{%d}\n", printf("\033[1;32mTest 41 => \033[0m|%05o|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 41 => \033[0m|%05o|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 42 => \033[0m|%9.2o|", 1234));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 42 => \033[0m|%9.2o|", 1234));
// 	printf("{%d}\n", printf("\033[1;32mTest 43 => \033[0m|%#9.2o|", 1234));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 43 => \033[0m|%#9.2o|", 1234));
// 	printf("{%d}\n", printf("\033[1;32mTest 44 => \033[0m|%.0o|, |%.o|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 44 => \033[0m|%.0o|, |%.o|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 45 => \033[0m|%.1o|, |%.1o|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 45 => \033[0m|%.1o|, |%.1o|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 46 => \033[0m|%.5o|, |%.5o|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 46 => \033[0m|%.5o|, |%.5o|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 47 => \033[0m|%10.5o|, |%10.5o|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 47 => \033[0m|%10.5o|, |%10.5o|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 48 => \033[0m|%-10.5o|, |%-10.5o|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 48 => \033[0m|%-10.5o|, |%-10.5o|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 49 => \033[0m|%o|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 49 => \033[0m|%o|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 50 => \033[0m|%-5o|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 50 => \033[0m|%-5o|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 51 => \033[0m|%o|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 51 => \033[0m|%o|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 52 => \033[0m|%5o|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 52 => \033[0m|%5o|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 53 => \033[0m|%#05o|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 53 => \033[0m|%#05o|",42));
// 	printf("{%d}\n", printf("\033[1;32mTest 54 => \033[0m|%#05o|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 54 => \033[0m|%#05o|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 55 => \033[0m|%#5o|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 55 => \033[0m|%#5o|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 56 => \033[0m|%-#5o|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 56 => \033[0m|%-#5o|", 0));


// 	printf("\033[1;41m|-----------------------| (Lancement du test UNSIGNED DECIMAL en cours...) |-----------------------|\033[0m\n");
// 	printf("\033[1;32m|-----| LE VRAI |-----|\033[0m\n");
// 	ft_printf("\033[1;31m|-----| LE NOTRE |-----|\033[0m\n");
// 	printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|%.u, %.0u|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 1 => \033[0m|%.u, %.0u|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|%.u, %.0u|", 42, 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 2 => \033[0m|%.u, %.0u|", 42, 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 3 => \033[0m|%#u|", (unsigned int)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3 => \033[0m|%#u|", (unsigned int)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 4 => \033[0m|%u|", (unsigned int)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 4 => \033[0m|%u|", (unsigned int)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 5 => \033[0m|%hu|", (unsigned short)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 5 => \033[0m|%hu|", (unsigned short)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%hhu|", (unsigned char)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 6 => \033[0m|%hhu|", (unsigned char)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 7 => \033[0m|%lu|", (unsigned long)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 7 => \033[0m|%lu|", (unsigned long)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 8 => \033[0m|%llu|", (unsigned long long)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 8 => \033[0m|%llu|", (unsigned long long)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 9 => \033[0m|%ju|", (uintmax_t)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 9 => \033[0m|%ju|", (uintmax_t)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 10 => \033[0m|%zu|", (size_t)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 10 => \033[0m|%zu|", (size_t)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 11 => \033[0m|%u|", (unsigned int)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 11 => \033[0m|%u|", (unsigned int)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 12 => \033[0m|%0u|", (unsigned int)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 12 => \033[0m|%0u|", (unsigned int)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 13 => \033[0m|%05.2u|", (unsigned int)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 13 => \033[0m|%05.2u|", (unsigned int)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 14 => \033[0m|%-9u|", (unsigned int)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 14 => \033[0m|%-9u|", (unsigned int)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 15 => \033[0m|%U|", (unsigned int)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 15 => \033[0m|%U|", (unsigned int)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 16 => \033[0m|%hU|", (unsigned short)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 16 => \033[0m|%hU|", (unsigned short)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 17 => \033[0m|%hhU|", (unsigned char)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 17 => \033[0m|%hhU|", (unsigned char)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 18 => \033[0m|%lU|", (unsigned long)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 18 => \033[0m|%lU|", (unsigned long)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 19 => \033[0m|%llU|", (unsigned long long)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 19 => \033[0m|%llU|", (unsigned long long)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 20 => \033[0m|%jU|", (uintmax_t)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 20 => \033[0m|%jU|", (uintmax_t)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 21 => \033[0m|%zU|", (size_t)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 21 => \033[0m|%zU|", (size_t)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 22 => \033[0m|%U|", (unsigned int)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 22 => \033[0m|%U|", (unsigned int)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%0U|", (unsigned int)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 23 => \033[0m|%0U|", (unsigned int)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%05.2U|", (unsigned int)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 24 => \033[0m|%05.2U|", (unsigned int)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%-9U|", (unsigned int)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 25 => \033[0m|%-9U|", (unsigned int)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 26 => \033[0m|%05.9u|", (unsigned int)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 26 => \033[0m|%05.9u|", (unsigned int)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 27 => \033[0m|%-0u|", (unsigned int)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 27 => \033[0m|%-0u|", (unsigned int)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 28 => \033[0m|%-0.u|", (unsigned int)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 28 => \033[0m|%-0.u|", (unsigned int)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 29 => \033[0m|%-0.5u|", (unsigned int)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 29 => \033[0m|%-0.5u|", (unsigned int)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 30 => \033[0m|%09.5u|", (unsigned int)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 30 => \033[0m|%09.5u|", (unsigned int)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 31 => \033[0m|%-9.5u|", (unsigned int)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 31 => \033[0m|%-9.5u|", (unsigned int)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 32 => \033[0m|%-5.9u|", (unsigned int)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 32 => \033[0m|%-5.9u|", (unsigned int)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 33 => \033[0m|%5.u|", (unsigned int)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 33 => \033[0m|%5.u|", (unsigned int)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 34 => \033[0m|%.u, %.0u|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 34 => \033[0m|%.u, %.0u|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 35 => \033[0m|%.u, %.2u|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 35 => \033[0m|%.u, %.2u|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 36 => \033[0m|%.u, %.0u|", 42, 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 36 => \033[0m|%.u, %.0u|", 42, 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 37 => \033[0m|%.u, %.2u|", 42, 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 37 => \033[0m|%.u, %.2u|", 42, 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 38 => \033[0m|%.u, %.0u|", 42, 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 38 => \033[0m|%.u, %.0u|", 42, 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 39 => \033[0m|%.u, %.2u|", 42, 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 39 => \033[0m|%.u, %.2u|", 42, 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 40 => \033[0m|%.u, %.2u, %u|", 0, -02, 02));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 40 => \033[0m|%.u, %.2u, %u|", 0, -02, 02));
// 	printf("{%d}\n", printf("\033[1;32mTest 41 => \033[0m|%05u|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 41 => \033[0m|%05u|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 42 => \033[0m|%9.2u|", 1234));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 42 => \033[0m|%9.2u|", 1234));
// 	printf("{%d}\n", printf("\033[1;32mTest 43 => \033[0m|%#9.2u|", 1234));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 43 => \033[0m|%#9.2u|", 1234));
// 	printf("{%d}\n", printf("\033[1;32mTest 44 => \033[0m|%.0u|, |%.u|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 44 => \033[0m|%.0u|, |%.u|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 45 => \033[0m|%.1u|, |%.1u|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 45 => \033[0m|%.1u|, |%.1u|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 46 => \033[0m|%.5u|, |%.5u|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 46 => \033[0m|%.5u|, |%.5u|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 47 => \033[0m|%10.5u|, |%10.5u|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 47 => \033[0m|%10.5u|, |%10.5u|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 48 => \033[0m|%-10.5u|, |%-10.5u|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 48 => \033[0m|%-10.5u|, |%-10.5u|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 49 => \033[0m|%u|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 49 => \033[0m|%u|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 50 => \033[0m|%-5u|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 50 => \033[0m|%-5u|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 51 => \033[0m|%u|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 51 => \033[0m|%u|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 52 => \033[0m|%5u|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 52 => \033[0m|%5u|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 53 => \033[0m|%#05u|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 53 => \033[0m|%#05u|",42));
// 	printf("{%d}\n", printf("\033[1;32mTest 54 => \033[0m|%#05u|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 54 => \033[0m|%#05u|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 55 => \033[0m|%#5u|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 55 => \033[0m|%#5u|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 56 => \033[0m|%-#5u|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 56 => \033[0m|%-#5u|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 57 => \033[0m|%lu|", LONG_MAX));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 57 => \033[0m|%lu|", LONG_MAX));
// 	printf("{%d}\n", printf("\033[1;32mTest 58 => \033[0m|%u|", -523));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 58 => \033[0m|%u|", -523));
// 	printf("{%d}\n", printf("\033[1;32mTest 59 => \033[0m|%lu|", LONG_MIN - 1));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 59 => \033[0m|%lu|", LONG_MIN - 1));
// 	printf("{%d}\n", printf("\033[1;32mTest 60 => \033[0m|%lu|", LONG_MIN));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 60 => \033[0m|%lu|", LONG_MIN));
// 	printf("{%d}\n", printf("\033[1;32mTest 61 => \033[0m|%lu|", LONG_MIN + 1));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 61 => \033[0m|%lu|", LONG_MIN + 1));


// 	printf("\033[1;41m|-------------------------| (Lancement du test POURCENTAGE en cours...) |-------------------------|\033[0m\n");
// 	printf("\033[1;32m|-----| LE VRAI |-----|\033[0m\n");
// 	ft_printf("\033[1;31m|-----| LE NOTRE |-----|\033[0m\n");
// 	printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|%%|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 1 => \033[0m|%%|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|%hh%|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 2 => \033[0m|%hh%|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 3 => \033[0m|%h%|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3 => \033[0m|%h%|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 4 => \033[0m|%l%|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 4 => \033[0m|%l%|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 5 => \033[0m|%ll%|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 5 => \033[0m|%ll%|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%j%|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 6 => \033[0m|%j%|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 7 => \033[0m|%z%|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 7 => \033[0m|%z%|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 8 => \033[0m|%5%|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 8 => \033[0m|%5%|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 8b => \033[0m|%.5%|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 8b => \033[0m|%.5%|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 9 => \033[0m|%05%|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 9 => \033[0m|%05%|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 10 => \033[0m|%0.5%|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 10 => \033[0m|%0.5%|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 11 => \033[0m|%+-10.2%|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 11 => \033[0m|%+-10.2%|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 12 => \033[0m|%+ -10.2%|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 12 => \033[0m|%+ -10.2%|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 13 => \033[0m|%0+-10.2%|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 13 => \033[0m|%0+-10.2%|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 14 => \033[0m|%+010.2z%|"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 14 => \033[0m|%+010.2z%|"));
// 	printf("{%d}\n", printf("\033[1;32mTest 15 => \033[0m|%+010.2%z%d|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 15 => \033[0m|%+010.2%z%d|", 42));


// 	printf("\033[1;41m|-------------------------| (Lancement du test SIGNED DECIMAL en cours...) |-------------------------|\033[0m\n");
// 	printf("\033[1;32m|-----| LE VRAI |-----|\033[0m\n");
// 	ft_printf("\033[1;31m|-----| LE NOTRE |-----|\033[0m\n");
// 	printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|%ld|", LONG_MAX));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 1 => \033[0m|%ld|", LONG_MAX));
// 	printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|%ld|", LONG_MIN));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 2 => \033[0m|%ld|", LONG_MIN));
// 	printf("{%d}\n", printf("\033[1;32mTest 3 => \033[0m|%4.3i|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3 => \033[0m|%4.3i|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 4 => \033[0m|%-3.1i|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 4 => \033[0m|%-3.1i|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 5 => \033[0m|%-4.1i|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 5 => \033[0m|%-4.1i|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%-4d|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 6 => \033[0m|%-4d|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 7 => \033[0m|%.d|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 7 => \033[0m|%.d|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 8 => \033[0m|%+d|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 8 => \033[0m|%+d|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 9 => \033[0m|% d|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 9 => \033[0m|% d|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 10 => \033[0m|%d|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 10 => \033[0m|%d|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 11 => \033[0m|%05.1d|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 11 => \033[0m|%05.1d|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 12 => \033[0m|%05.1zd|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 12 => \033[0m|%05.1zd|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 13 => \033[0m|%09.5d|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 13 => \033[0m|%09.5d|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 14 => \033[0m|%09.3d|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 14 => \033[0m|%09.3d|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 15 => \033[0m|%09.2d|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 15 => \033[0m|%09.2d|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 16 => \033[0m|%.5d|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 16 => \033[0m|%.5d|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 17 => \033[0m|%.5d|", 400000));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 17 => \033[0m|%.5d|", 400000));
// 	printf("{%d}\n", printf("\033[1;32mTest 18 => \033[0m|%-.5d|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 18 => \033[0m|%-.5d|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 19 => \033[0m|% .5d|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 19 => \033[0m|% .5d|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 20 => \033[0m|%+.5d|", 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 20 => \033[0m|%+.5d|", 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 21 => \033[0m|%.5d|", -42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 21 => \033[0m|%.5d|", -42));
// 	printf("{%d}\n", printf("\033[1;32mTest 22 => \033[0m|%-.5d|", -42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 22 => \033[0m|%-.5d|", -42));
// 	printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|% .5d|", -42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 23 => \033[0m|% .5d|", -42));
// 	printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%+.5d|", -42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 24 => \033[0m|%+.5d|", -42));
// 	printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%d|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 25 => \033[0m|%d|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 26 => \033[0m|%+d|", +42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 26 => \033[0m|%+d|", +42));
// 	printf("{%d}\n", printf("\033[1;32mTest 27 => \033[0m|%.5hhd|", (char)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 27 => \033[0m|%.5hhd|", (char)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 28 => \033[0m|%.5hhd|", (char)40));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 28 => \033[0m|%.5hhd|", (char)40));
// 	printf("{%d}\n", printf("\033[1;32mTest 29 => \033[0m|%-.5hhd|", (char)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 29 => \033[0m|%-.5hhd|", (char)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 30 => \033[0m|% .5hhd|", (char)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 30 => \033[0m|% .5hhd|", (char)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 31 => \033[0m|%+.5hhd|", (char)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 31 => \033[0m|%+.5hhd|", (char)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 32 => \033[0m|%.5hhd|", (char)-42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 32 => \033[0m|%.5hhd|", (char)-42));
// 	printf("{%d}\n", printf("\033[1;32mTest 33 => \033[0m|%-.5hhd|", (char)-42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 33 => \033[0m|%-.5hhd|", (char)-42));
// 	printf("{%d}\n", printf("\033[1;32mTest 34 => \033[0m|% .5hhd|", (char)-42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 34 => \033[0m|% .5hhd|", (char)-42));
// 	printf("{%d}\n", printf("\033[1;32mTest 35 => \033[0m|%+.5hhd|", (char)-42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 35 => \033[0m|%+.5hhd|", (char)-42));
// 	printf("{%d}\n", printf("\033[1;32mTest 36 => \033[0m|%15hhd|", (char)-42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 36 => \033[0m|%15hhd|", (char)-42));
// 	printf("{%d}\n", printf("\033[1;32mTest 37 => \033[0m|%15hhd|", (char)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 37 => \033[0m|%15hhd|", (char)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 38 => \033[0m|%1hhd|", (char)400000));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 38 => \033[0m|%1hhd|", (char)400000));
// 	printf("{%d}\n", printf("\033[1;32mTest 39 => \033[0m|%15.4d|", -42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 39 => \033[0m|%15.4d|", -42));
// 	printf("{%d}\n", printf("\033[1;32mTest 40 => \033[0m|%8.4d|", -424242424));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 40 => \033[0m|%8.4d|", -424242424));
// 	printf("{%d}\n", printf("\033[1;32mTest 41 => \033[0m|%hd|", (short)33000));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 41 => \033[0m|%hd|", (short)33000));
// 	printf("{%d}\n", printf("\033[1;32mTest 42 => \033[0m|%+hhd|", (char)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 42 => \033[0m|%+hhd|", (char)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 43 => \033[0m|%+hhd|", (char)-42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 43 => \033[0m|%+hhd|", (char)-42));
// 	printf("{%d}\n", printf("\033[1;32mTest 44 => \033[0m|%+hhd|", (char)400000));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 44 => \033[0m|%+hhd|", (char)400000));
// 	printf("{%d}\n", printf("\033[1;32mTest 45 => \033[0m|%+hhd|", (char)-400000));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 45 => \033[0m|%+hhd|", (char)-400000));
// 	printf("{%d}\n", printf("\033[1;32mTest 46 => \033[0m|%ld|", (long)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 46 => \033[0m|%ld|", (long)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 47 => \033[0m|%lld|", (long long)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 47 => \033[0m|%lld|", (long long)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 48 => \033[0m|%jd|", (intmax_t)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 48 => \033[0m|%jd|", (intmax_t)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 49 => \033[0m|%zd|", (size_t)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 49 => \033[0m|%zd|", (size_t)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 50 => \033[0m|%hD|", (short)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 50 => \033[0m|%hD|", (short)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 51 => \033[0m|%hhD|", (char)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 51 => \033[0m|%hhD|", (char)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 52 => \033[0m|%lD|", (long)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 52 => \033[0m|%lD|", (long)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 53 => \033[0m|%llD|", (long long)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 53 => \033[0m|%llD|", (long long)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 54 => \033[0m|%jD|", (intmax_t)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 54 => \033[0m|%jD|", (intmax_t)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 55 => \033[0m|%zD|", (size_t)42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 55 => \033[0m|%zD|", (size_t)42));
// 	printf("{%d}\n", printf("\033[1;32mTest 56 => \033[0m|%10.5d|, |%10.5d|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 56 => \033[0m|%10.5d|, |%10.5d|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 56 => \033[0m|abcdefg%0.0d|abcde", 012));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 56 => \033[0m|abcdefg%0.0d|abcde", 012));
// 	printf("{%d}\n", printf("\033[1;32mTest 57 => \033[0m|abcdefg%00.0d|abcde", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 57 => \033[0m|abcdefg%00.0d|abcde", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 58 => \033[0m|abcdefg%00.d|abcde", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 58 => \033[0m|abcdefg%00.d|abcde", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 59 => \033[0m|abcdefg%00d|abcde", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 59 => \033[0m|abcdefg%00d|abcde", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 60 => \033[0m|abcdefg%.d|abcde", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 60 => \033[0m|abcdefg%.d|abcde", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 61 => \033[0m|abcdefg%.0d|abcde", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 61 => \033[0m|abcdefg%.0d|abcde", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 62 => \033[0mOKLM"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 62 => \033[0mOKLM"));
// 	printf("{%d}\n", printf("\033[1;32mTest 63 => \033[0m"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 63 => \033[0m"));
// 	printf("{%d}\n", printf("\033[1;32mTest 64 => \033[0m|%05.1d|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 64 => \033[0m|%05.1d|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 65 => \033[0m|%05.1zd|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 65 => \033[0m|%05.1zd|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 66 => \033[0m|%09.5d|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 66 => \033[0m|%09.5d|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 67 => \033[0m|%09.3d|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 67 => \033[0m|%09.3d|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 68 => \033[0m|%09.2d|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 68 => \033[0m|%09.2d|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 69 => \033[0m|%.5d|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 69 => \033[0m|%.5d|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 70 => \033[0m|%.5d|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 70 => \033[0m|%.5d|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 71 => \033[0m|%-.5d|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 71 => \033[0m|%-.5d|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 72 => \033[0m|% .5d|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 72 => \033[0m|% .5d|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 73 => \033[0m|%+.5d|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 73 => \033[0m|%+.5d|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 74 => \033[0m|%.5d|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 74 => \033[0m|%.5d|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 75 => \033[0m|%-.5d|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 75 => \033[0m|%-.5d|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 76 => \033[0m|% .5d|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 76 => \033[0m|% .5d|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 77 => \033[0m|%+.5d|", 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 77 => \033[0m|%+.5d|", 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 78 => \033[0m|%.d, %.0d|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 78 => \033[0m|%.d, %.0d|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 79 => \033[0m|%.d, %.2d|", 0, 0));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 79 => \033[0m|%.d, %.2d|", 0, 0));
// 	printf("{%d}\n", printf("\033[1;32mTest 80 => \033[0m|%.d, %.0d|", 42, 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 80 => \033[0m|%.d, %.0d|", 42, 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 81 => \033[0m|%.d, %.2d|", 42, 42));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 81 => \033[0m|%.d, %.2d|", 42, 42));
// 	printf("{%d}\n", printf("\033[1;32mTest 82 => \033[0m|%d, %d, %d|", 0, -02, 02));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 82 => \033[0m|%d, %d, %d|", 0, -02, 02));


// 	printf("\033[1;41m|-------------------------| (Lancement du test UNICODE S en cours...) |-------------------------|\033[0m\n");
// 	setlocale(LC_ALL, "");
// 	printf("\033[1;32m|-----| LE VRAI |-----|\033[0m\n");
// 	ft_printf("\033[1;31m|-----| LE NOTRE |-----|\033[0m\n");
// 	printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|%05.S|", L"42 c est cool"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 1 => \033[0m|%05.S|", L"42 c est cool"));
// 	printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|%.4S|", L"我¼是一只猫。"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 2 => \033[0m|%.4S|", L"我¼是一只猫。"));
// 	printf("{%d}\n", printf("\033[1;32mTest 3 => \033[0m|%15.6S|", L"我¼是一只猫。"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3 => \033[0m|%15.6S|", L"我¼是一只猫。"));
// 	printf("{%d}\n", printf("\033[1;32mTest 3b => \033[0m|%-15.5S|", L"我是一只猫。"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3b => \033[0m|%-15.5S|", L"我是一只猫。"));
// 	printf("{%d}\n", printf("\033[1;32mTest 3c => \033[0m|%15.5S|", L"᳄᳄᳄᳄᳄᳄"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3c => \033[0m|%15.5S|", L"᳄᳄᳄᳄᳄᳄᳄"));
// 	printf("{%d}\n", printf("\033[1;32mTest 3d => \033[0m|%-15.5S|", L"᳄᳄᳄᳄᳄᳄"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3d => \033[0m|%-15.5S|", L"᳄᳄᳄᳄᳄᳄᳄"));
// 	printf("{%d}\n", printf("\033[1;32mTest 3e => \033[0m|%-45.25S|", L"᳄ ᳄ ᳄ ᳄ ᳄ ᳄ "));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3e => \033[0m|%-45.25S|", L"᳄ ᳄ ᳄ ᳄ ᳄ ᳄ "));
// 	printf("{%d}\n", printf("\033[1;32mTest 3f => \033[0m|%-45.25S|", L"᳄ ᳄ ᳄ ᳄ ᳄ ᳄ "));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3f => \033[0m|%-45.25S|", L"᳄ ᳄ ᳄ ᳄ ᳄ ᳄ "));
// 	printf("{%d}\n", printf("\033[1;32mTest 4 => \033[0m|%4.15S|", L"我是一只猫。"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 4 => \033[0m|%4.15S|", L"我是一只猫。"));
// 	printf("{%d}\n", printf("\033[1;32mTest 5 => \033[0m|%4.S|", L"我是一只猫。"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 5 => \033[0m|%4.S|", L"我是一只猫。"));
// 	printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%4.1S|", L"Jambon"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 6 => \033[0m|%4.1S|", L"Jambon"));
// 	printf("{%d}\n", printf("\033[1;32mTest 7 => \033[0m|%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S|", L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ", L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L""));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 7 => \033[0m|%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S|", L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ", L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L""));
// 	printf("{%d}\n", printf("\033[1;32mTest 8 => \033[0m|%S|", L"猫"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 8 => \033[0m|%S|", L"猫"));
// 	printf("{%d}\n", printf("\033[1;32mTest 9 => \033[0m|%zd|", L"᳄"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 9 => \033[0m|%zd|", L"᳄"));
// 	printf("{%d}\n", printf("\033[1;32mTest 10 => \033[0m|%S|", L"᳄"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 10 => \033[0m|%S|", L"᳄"));
// 	printf("{%d}\n", printf("\033[1;32mTest 11 => \033[0m|%S|", L"ƜƜƜƜƜƜ"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 11 => \033[0m|%S|", L"ƜƜƜƜƜƜ"));
// 	printf("{%d}\n", printf("\033[1;32mTest 12 => \033[0m|%S|", L"∰ J'aime∰ les∰ poneys∰ roses∰ "));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 12 => \033[0m|%S|", L"∰ J'aime∰ les∰ poneys∰ roses∰ "));
// 	printf("{%d}\n", printf("\033[1;32mTest 13 => \033[0m|%S|", L"é é é é é"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 13 => \033[0m|%S|", L"é é é é é"));
// 	printf("{%d}\n", printf("\033[1;32mTest 14 => \033[0m|%S|", L"𖣐 𖣐 𖣐 𖣐 𖣐"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 14 => \033[0m|%S|", L"𖣐 𖣐 𖣐 𖣐 𖣐"));
// 	printf("{%d}\n", printf("\033[1;32mTest 15 => \033[0m|%S|", L"🧀 🧀 🧀 🧀 🧀 "));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 15 => \033[0m|%S|", L"🧀 🧀 🧀 🧀 🧀 "));
// 	printf("{%d}\n", printf("\033[1;32mTest 16 => \033[0m|%22.4S|", L"🧀 🧀 🧀 🧀 🧀 "));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 16 => \033[0m|%22.4S|", L"🧀 🧀 🧀 🧀 🧀 "));
// 	printf("{%d}\n", printf("\033[1;32mTest 16b => \033[0m|%-022.4S|", L"🧀 🧀 🧀 🧀 🧀 "));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 16b => \033[0m|%-022.4S|", L"🧀 🧀 🧀 🧀 🧀 "));
// 	printf("{%d}\n", printf("\033[1;32mTest 17 => \033[0m|%4.22S|", L"😐  😐 "));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 17 => \033[0m|%4.22S|", L"😐  😐 "));
// 	printf("{%d}\n", printf("\033[1;32mTest 18 => \033[0m|%4S|", L"😐  😐 "));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 18 => \033[0m|%4S|", L"😐  😐 "));
// 	printf("{%d}\n", printf("\033[1;32mTest 19 => \033[0m|%.22S|", L"😐  😐 "));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 19 => \033[0m|%.22S|", L"😐  😐 "));
// 	printf("{%d}\n", printf("\033[1;32mTest 20 => \033[0m|%S|", L"NULL"));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 20 => \033[0m|%S|", L"NULL"));
// 	printf("{%d}\n", printf("\033[1;32mTest 21 => \033[0m|%0.0S|", L"᳄ "));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 21 => \033[0m|%0.0S|", L"᳄ "));
// 	printf("{%d}\n", printf("\033[1;32mTest 22 => \033[0m|%0.5S|", L"᳄ ᳄ "));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 22 => \033[0m|%0.5S|", L"᳄ ᳄ "));
// 	printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%#-+ 0.0S|", L"🧀 🧀 "));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 23 => \033[0m|%#-+ 0.0S|", L"🧀 🧀 "));
// 	printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%#-+ 0.12S|", L"🧀 🧀 "));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 24 => \033[0m|%#-+ 0.12S|", L"🧀 🧀 "));
// 	printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%#-+ 5.12S|", L"🧀 🧀 "));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 25 => \033[0m|%#-+ 5.12S|", L"🧀 🧀 "));
// 	printf("{%d}\n", printf("\033[1;32mTest 26 => \033[0m|%hhS|", L"🧀 "));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 26 => \033[0m|%hhS|", L"🧀 "));
// 	printf("{%d}\n", printf("\033[1;32mTest 27 => \033[0m|%5.12S|", L""));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 27 => \033[0m|%5.12S|", L""));
// 	printf("{%d}\n", printf("\033[1;32mTest 28 => \033[0m|%5S|", L""));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 28 => \033[0m|%5S|", L""));
// 	printf("{%d}\n", printf("\033[1;32mTest 29 => \033[0m|%5.12S|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 29 => \033[0m|%5.12S|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 30 => \033[0m|%5S|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 30 => \033[0m|%5S|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 31 => \033[0m|%8S|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 31 => \033[0m|%8S|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 32 => \033[0m|%.2S|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 32 => \033[0m|%.2S|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 33 => \033[0m|%8.2S|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 33 => \033[0m|%8.2S|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 34 => \033[0m|%-8.2S|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 34 => \033[0m|%-8.2S|", NULL));


// 	printf("\033[1;41m|-------------------------| (Lancement du test UNICODE C en cours...) |-------------------------|\033[0m\n");
// 	setlocale(LC_ALL, "");
// 	printf("\033[1;32m|-----| LE VRAI |-----|\033[0m\n");
// 	ft_printf("\033[1;31m|-----| LE NOTRE |-----|\033[0m\n");
// 	printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|%05.C|", L'l'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 1 => \033[0m|%05.C|", L'l'));
// 	printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|%.4C|", L'我'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 2 => \033[0m|%.3C|", L'我'));
// 	printf("{%d}\n", printf("\033[1;32mTest 3 => \033[0m|%15.5C|", L'我'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3 => \033[0m|%15.5C|", L'我'));
// 	printf("{%d}\n", printf("\033[1;32mTest 3b => \033[0m|%-15.5C|", L'我'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3b => \033[0m|%-15.5C|", L'我'));
// 	printf("{%d}\n", printf("\033[1;32mTest 3c => \033[0m|%15.5C|", L'᳄'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3c => \033[0m|%15.5C|", L'᳄'));
// 	printf("{%d}\n", printf("\033[1;32mTest 3d => \033[0m|%-15.5C|", L'᳄'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3d => \033[0m|%-15.5C|", L'᳄'));
// 	printf("{%d}\n", printf("\033[1;32mTest 3e => \033[0m|%-45.25C|", L'᳄'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3e => \033[0m|%-45.25C|", L'᳄'));
// 	printf("{%d}\n", printf("\033[1;32mTest 3f => \033[0m|%-45.25C|", L'᳄'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3f => \033[0m|%-45.25C|", L'᳄'));
// 	printf("{%d}\n", printf("\033[1;32mTest 4 => \033[0m|%4.15C|", L'我'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 4 => \033[0m|%4.15C|", L'我'));
// 	//printf("{%d}\n", printf("\033[1;32mTest 5 => \033[0m|%4.4C|", '我'));
// 	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 5 => \033[0m|%4.4C|", L'我'));
// 	printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%4.1C|", L'Jambon'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 6 => \033[0m|%4.1C|", L'Jambon'));
// 	printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%4.1C|", L'Merci'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 6 => \033[0m|%4.1C|", L'Merci'));
// 	//printf("{%d}\n", printf("\033[1;32mTest 7 => \033[0m|%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C|", L'Α α', L'Β β', L'Γ γ', L'Δ δ', L'Ε ε', L'Ζ ζ', L'Η η', L'Θ θ', L'Ι ι', L'Κ κ', L'Λ λ', L'Μ μ', L'Ν ν', L'Ξ ξ', L'Ο ο', L'Π π', L'Ρ ρ', L'Σ σ', L'Τ τ', L'Υ υ', L'Φ φ', L'Χ χ', L'Ψ ψ', L'Ω ω', L''));
// 	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 7 => \033[0m|%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C|", L'Α α', L'Β β', L'Γ γ', L'Δ δ', L'Ε ε', L'Ζ ζ', L'Η η', L'Θ θ', L'Ι ι', L'Κ κ', L'Λ λ', L'Μ μ', L'Ν ν', L'Ξ ξ', L'Ο ο', L'Π π', L'Ρ ρ', L'Σ σ', L'Τ τ', L'Υ υ', L'Φ φ', L'Χ χ', L'Ψ ψ', L'Ω ω', L''));
// 	printf("{%d}\n", printf("\033[1;32mTest 8 => \033[0m|%C|", L'猫'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 8 => \033[0m|%C|", L'猫'));
// 	printf("{%d}\n", printf("\033[1;32mTest 9 => \033[0m|%zd|", L'᳄'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 9 => \033[0m|%zd|", L'᳄'));
// 	printf("{%d}\n", printf("\033[1;32mTest 10 => \033[0m|%C|", L'᳄'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 10 => \033[0m|%C|", L'᳄'));
// 	printf("{%d}\n", printf("\033[1;32mTest 11 => \033[0m|%C|", L'Ɯ'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 11 => \033[0m|%C|", L'Ɯ'));
// 	printf("{%d}\n", printf("\033[1;32mTest 12 => \033[0m|%C|", L'∰'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 12 => \033[0m|%C|", L'∰'));
// 	printf("{%d}\n", printf("\033[1;32mTest 13 => \033[0m|%C|", L'é'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 13 => \033[0m|%C|", L'é'));
// 	printf("{%d}\n", printf("\033[1;32mTest 14 => \033[0m|%C|", L'𖣐'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 14 => \033[0m|%C|", L'𖣐'));
// 	printf("{%d}\n", printf("\033[1;32mTest 15 => \033[0m|%C|", L'🧀'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 15 => \033[0m|%C|", L'🧀'));
// 	printf("{%d}\n", printf("\033[1;32mTest 16 => \033[0m|%22.4C|", L'🧀'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 16 => \033[0m|%22.4C|", L'🧀'));
// 	printf("{%d}\n", printf("\033[1;32mTest 16b => \033[0m|%-022.4C|", L'🧀'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 16b => \033[0m|%-022.4C|", L'🧀'));
// 	printf("{%d}\n", printf("\033[1;32mTest 17 => \033[0m|%4.22C|", L'😐'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 17 => \033[0m|%4.22C|", L'😐'));
// 	printf("{%d}\n", printf("\033[1;32mTest 18 => \033[0m|%4C|", L'😐'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 18 => \033[0m|%4C|", L'😐'));
// 	printf("{%d}\n", printf("\033[1;32mTest 19 => \033[0m|%.22C|", L'😐'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 19 => \033[0m|%.22C|", L'😐'));
// 	printf("{%d}\n", printf("\033[1;32mTest 20 => \033[0m|%C|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 20 => \033[0m|%C|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 21 => \033[0m|%0.0C|", L'᳄'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 21 => \033[0m|%0.0C|", L'᳄'));
// 	printf("{%d}\n", printf("\033[1;32mTest 22 => \033[0m|%0.5C|", L'᳄ ᳄ '));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 22 => \033[0m|%0.5C|", L'᳄ ᳄ '));
// 	printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%#-+ 0.0C|", L'🧀 🧀 '));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 23 => \033[0m|%#-+ 0.0C|", L'🧀 🧀 '));
// 	printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%#-+ 0.12C|", L'🧀'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 24 => \033[0m|%#-+ 0.12C|", L'🧀'));
// 	printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%#-+ 5.12C|", L'🧀'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 25 => \033[0m|%#-+ 5.12C|", L'🧀'));
// 	printf("{%d}\n", printf("\033[1;32mTest 26 => \033[0m|%hhC|", L'🧀'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 26 => \033[0m|%hhC|", L'🧀'));
// 	printf("{%d}\n", printf("\033[1;32mTest 27 => \033[0m|%5.12C|", 'a'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 27 => \033[0m|%5.12C|", 'a'));
// 	printf("{%d}\n", printf("\033[1;32mTest 28 => \033[0m|%5C|", 'a'));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 28 => \033[0m|%5C|", 'a'));
// 	printf("{%d}\n", printf("\033[1;32mTest 29 => \033[0m|%5.12C|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 29 => \033[0m|%5.12C|", NULL));
// 	printf("{%d}\n", printf("\033[1;32mTest 30 => \033[0m|%5C|", NULL));
// 	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 30 => \033[0m|%5C|", NULL));


//   ft_printf("\n");
//   ft_printf("%%\n");
//   ft_printf("%d\n", 42);
//   ft_printf("%d%d\n", 42, 41);
//   ft_printf("%d%d%d\n", 42, 43, 44);
//   ft_printf("%ld\n", 2147483647);
//   ft_printf("%lld\n", 9223372036854775807);
//   ft_printf("%x\n", 505);
//   ft_printf("%X\n", 505);
//   ft_printf("%p\n", &ft_printf);
//   ft_printf("%20.15d\n", 54321);
//   ft_printf("%-10d\n", 3);
//   ft_printf("% d\n", 3);
//   ft_printf("%+d\n", 3);
//   ft_printf("%010d\n", 1);
//   ft_printf("%hhd\n", 0);
//   ft_printf("%jd\n", 9223372036854775807);
//   ft_printf("%zd\n", 4294967295);
//   ft_printf("%\n");
//   ft_printf("%U\n", 4294967295);
//   ft_printf("%u\n", 4294967295);
//   ft_printf("%o\n", 40);
//   ft_printf("%%#08x\n", 42);
//   ft_printf("%x\n", 1000);
//   ft_printf("%#X\n", 1000);
//   ft_printf("%s\n", NULL);
//   ft_printf("%S\n", L"ݗݜशব");
//   ft_printf("%s%s\n", "test", "test");
//   ft_printf("%s%s%s\n", "test", "test", "test");
//   ft_printf("%C\n", 15000);
//   ft_printf("*****%    \n");
//   printf("*****%    \n");


// printf("\033[1;32mTest 2 => \033[0m|% x|", (unsigned int)42);
// ft_printf("\033[1;32mTest 2 => \033[0m|% x|", (unsigned int)42);

// ft_printf("%\n");
// printf("%\n");

    return 0;
}