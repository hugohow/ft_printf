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

Source: [wiki](https://en.wikipedia.org/wiki/Printf_format_string)

#### Width

A minimum number of characters to output.

#### Precision

A maximum limit on the output.

#### Length

|Length|Argument type|
|:---|:---|
|`hh`|int|
|`h`|short int|
|`l`|long int|
|`ll`|long long int|
|`j`|intmax_t|
|`z`|size_t|
|`L`|long double|

#### Type

`sSpdDioOuUxXcCbneEfFgGaA`
