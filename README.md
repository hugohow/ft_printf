[![Build Status](https://travis-ci.org/hugohow/ft_printf.svg?branch=master)](https://travis-ci.org/hugohow/ft_printf)

ft_printf("test %-12f et % #.1x %24s !\n", 42.001, 20, "coco");

# ft_printf

### Format placeholder syntax

```
%[parameter][flags][width][.precision][length]type
```

#### Flags

|Character|Description|
|:---|:---|
|`-`<br/>(minus)|Left-align the output of this placeholder. (The default is to right-align the output.)|
|`+`<br/>(plus)|Prepends a plus for positive signed-numeric types. positive = `+`, negative = `-`.<br/>(The default doesn't prepend anything in front of positive numbers.)|
|` `<br/>(space)|Prepends a space for positive signed-numeric types. positive = ` `, negative = `-`. This flag is ignored if the + flag exists.<br/>(The default doesn't prepend anything in front of positive numbers.)|
|`0`<br/>(zero)|When the 'width' option is specified, prepends zeros for numeric types.(The default prepends spaces.)<br/>For example, `printf("%2X",3)` produces `3`, while `printf("%04X",3)` produces in `0003`.|
|`#`<br/>(hash)|Alternate form:<br/>For `o`, `x`, `X` types, the text `0`, `0x`, `0X`, respectively, is prepended to non-zero numbers.|

#### Width

A minimum number of characters to output.

#### Precision

A maximum limit on the output.

#### Length

|Length|`d`, `i`|`u`, `o`, `x`, `X`|`f`, `F`, `e`, `E`, `g`, `G`, `a`, `A`|`c`|`s`|`p`|
|:---|:---|:---|:---|:---|:---|:---|
|`hh`|`int`|`unsigned int`|`double`|`int`|`char`|`void*`|
|`h`|`short int`|`unsigned short int`||`wint_t`|`wchar_t*`||
|`l`|`long int`|`unsigned long int`|||||
|`ll`|`long long int`|`unsigned long long int`|||||
|`j`|`intmax_t`|`uintmax_t`|||||
|`z`|`size_t`|`size_t`|||||
|`L`|||`long double`||||

#### Type

`sSpdDioOuUxXcCbneEfFgGaA`

|Character|Description|
|:---|:---|
|`%`|prints a `%` character|
|`d`, `i`|`int` as a signed decimal number (`i` is kept for historical matters, `d` is preferred)|
|`u`|decimal `unsigned int`|
|`f`, `F`|if argument is `float`, will be converted in `double` (`inf`, `infinity` and `nan` for `f`; `INF`, `INFINITY` and `NAN` for `F`)|
|`e`, `E`|if argument is `float`, will be converted in `double` (`e`: exposant e, `E`: exposant E)|
|`x`, `X`|`unsigned int` as a hexadecimal number (`x` for lowercase letters, `X` for uppercase letters)|
|`o`|`unsigned int` in octal|
|`s`|null-terminated string|
|`c`|`char`|
|`p`|`void*` pointer to void|
|`a`, `A`|`double` in hexadecimal notation, starting with `0x` or `0X`(`a` for lowercase letters, `A` for uppercase letters)|
|`n`|prints nothing, but writes the number of characters successfully written so far into an integer pointer parameter.|

Source: [wiki](https://en.wikipedia.org/wiki/Printf_format_string)
