[![Build Status](https://travis-ci.org/hugohow/ft_printf.svg?branch=master)](https://travis-ci.org/hugohow/ft_printf)

ft_printf("test %-12f et % #.1x %24s !\n", 42.001, 20, "coco");



# ft_printf

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
