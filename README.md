# ft_printf

[![Build Status](https://travis-ci.org/hugohow/ft_printf.svg?branch=master)](https://travis-ci.org/hugohow/ft_printf)

ft_printf("test %-12f et % #.1x %24s !\n", 42.001, 20, "coco");

Implementation from scratch of some big int operations.

Implementation from scratch of the double-precision floating-point format to get the precised representation of 
`ft_printf("%+8.14Lf", 12.847e451L);`

### No memory leaks. (Valgrind certified)

## TO DO

- Adapt `make test` for linux

# Usage

``` C
#include "ft_printf.h"

int ft_printf(const char* format, ...);

int main(void)
{
  ft_printf("test %-12f et % #.1x %24s !\n", 42.001, 20, "coco");
  return (0);
}
```

```
make re
gcc -Iincludes main.c libftprintf.a -o main
./main
```

### Format placeholder syntax

```
%[parameter][flags][width][.precision][length]type
```

#### Flags

`- + 0 #`

#### Width

A minimum number of characters to output.

#### Precision

A maximum limit on the output.

#### Length

`hh h l ll`

#### Type

`% d u f e c o s c p b`
