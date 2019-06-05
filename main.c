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

	// printf("%d\n", ft_printf("% Zoooo"));
	ft_printf("{%05.s}", 0);
	printf("{%05.s}", 0);
	// ft_printf("Zoooo% ");
	// printf("%d", printf("% Zoooo %d",1));
	// printf("%d", printf("% "));
	// printf("\n\n");

	// ft_printf("%");
	// printf("%");
	// printf("%5%\n");
	// printf("\n\n");

	// ft_printf("%0%\n");
	// printf("%0%\n");
	// printf("\n\n");

	// ft_printf("%.0%\n");
	// printf("%.0%\n");
	// printf("\n\n");

	// ft_printf("%%0-3d %0-3d\n", 0);
	// printf("%%0-3d %0-3d\n", 0);
	// printf("\n\n");

	// ft_printf("%%05.s %05.s\n", 0);
	// printf("%%05.s %05.s\n", 0);
	// printf("\n\n");


	// ft_printf("%%p %p\n", 0);
	// printf("%%p %p\n", 0);
	// printf("\n\n");

	// ft_printf("%%10p %10p\n", 0);
	// printf("%%10p %10p\n", 0);
	// printf("\n\n");


	// ft_printf("%%10.2p %10.2p\n", 0);
	// printf("%%10.2p %10.2p\n", 0);
	// printf("\n\n");


	// ft_printf("%%10.4p %10.4p\n", 0);
	// printf("%%10.4p %10.4p\n", 0);
	// printf("\n\n");



	// ft_printf("%%10.0p %10.0p\n", 0);
	// printf("%%10.0p %10.0p\n", 0);
	// printf("\n\n");


	// ft_printf("%%0.0p %0.0p\n", 0);
	// printf("%%0.0p %0.0p\n", 0);
	// printf("\n\n");

	// ft_printf("%%lp %lp\n", 42);
	// printf("%%lp %lp\n", 42);
	// printf("\n\n");

	// ft_printf("%p\n", NULL);
	// printf("%p", NULL);
// ft_printf("%.5p\n", 0);
// printf("%.5p", 0);

	// ft_printf("% -2.1e\n", 0.0);
	// printf("% -2.1e", 0.0);

	// ft_printf("%e\n", 123499912349991234999123499912349991234999123499912349991234999123499912349991234999123499912349991234999123499912349991234999123499912349991234999123499912349991234999123499912349991234999.222221);
	// printf("%e", 123499912349991234999123499912349991234999123499912349991234999123499912349991234999123499912349991234999123499912349991234999123499912349991234999123499912349991234999123499912349991234999.222221);
	// printf("%-04.0p", 0, 0);


	// printf("%.0%");
	// ft_printf("%hd\n", 32769);
	// printf("%hd", 32769);
	// ft_printf("%23.5li|%-23.5li|%+23.5li|% 23.5li|%023.5li\n", LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN);
	// printf("%23.5li|%-23.5li|%+23.5li|% 23.5li|%023.5li", LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN);

	// ft_printf("%-+23.5hhi|%- 23.5hhi|%-023.5hhi|%+ 23.5hhi|%+023.5hhi|% 023.5hhi|%-+ 023.5hhi\n", LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN);
	// printf("%-+23.5hhi|%- 23.5hhi|%-023.5hhi|%+ 23.5hhi|%+023.5hhi|% 023.5hhi|%-+ 023.5hhi", LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MIN);

// 	char str[9999];

// 	ft_sprintf(str, "ok %d sdasda", 9999);
// 	printf("%s", str);

// 	ft_printf("ft_printf\t|%5%|\n");
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



// ft_printf("ft_printf +99.1: %.5f|\n", +99.1);
// ft_printf("ft_printf +0.1: %.5f|\n", +0.1);
// ft_printf("ft_printf +15.0: %.5f|\n", +15.0);
// ft_printf("ft_printf +30: %.5f|\n", (double)30);
// ft_printf("ft_printf +0L: %.5f|\n", (double)0);







// ft_printf("%f|%-f|%+f|% f|%#f|%0f\n", INFINITY, INFINITY, INFINITY, INFINITY, INFINITY, INFINITY);


// ft_printf(" ft_printf :\t%-+8.14f|%- 8.14f|%-#8.14f|%-08.14f|%-+#8.14f|%-+ #08.14f", 0., 0., 0., 0., 0., 0.);
// // 



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



	// ft_printf(" ft_printf %%.14f of INFINITY :|%e|%-e|%+e|% e|%#e|%0e\n", INFINITY, INFINITY, INFINITY, INFINITY, INFINITY, INFINITY);
	// printf(" printf %%.14f of INFINITY :|%e|%-e|%+e|% e|%#e|%0e\n", INFINITY, INFINITY, INFINITY, INFINITY, INFINITY, INFINITY);
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




	// ft_printf(" ft_printf :|%.10e|%10.10e|%-10.10e\n", 9999.1222999, 9999.1222999, 9999.1222999);


	// printf(" printf :|%.10e|%10.10e|%-10.10e\n", 9999.1222999, 9999.1222999, 9999.1222999);



	// ft_printf(" ft_printf :|%.5e|%10.5e|%-10.5e\n", 9999.1222999, 9999.1222999, 9999.1222999);
	// printf(" printf :|%.5e|%10.5e|%-10.5e\n", 9999.1222999, 9999.1222999, 9999.1222999);




	// ft_printf(" ft_printf :|%.1e|%10.1e|%-10.1e\n", 9999.1222999, 9999.1222999, 9999.1222999);
	// printf(" printf :|%.1e|%10.1e|%-10.1e\n", 9999.1222999, 9999.1222999, 9999.1222999);



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
    return 0;
}