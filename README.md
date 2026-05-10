*This project has been created as part of the 42 curriculum by armelkon.*

# ft_printf

## Description

`ft_printf` is a 42 project that recreates part of the original C `printf` function.

The goal is to understand how formatted output works in C, including:

- variadic functions
- format specifiers
- writing to standard output
- number conversion
- hexadecimal conversion
- pointer addresses
- counting printed characters

The final result is a static library:

```bash
libftprintf.a
```

---

## Supported conversions

This project handles the following format specifiers:

| Specifier | Meaning |
|---|---|
| `%c` | print a single character |
| `%s` | print a string |
| `%p` | print a pointer address |
| `%d` | print a signed decimal integer |
| `%i` | print a signed decimal integer |
| `%u` | print an unsigned decimal integer |
| `%x` | print a number in lowercase hexadecimal |
| `%X` | print a number in uppercase hexadecimal |
| `%%` | print a percent sign |

---

## Compilation

Compile the library:

```bash
make
```

This creates:

```bash
libftprintf.a
```

Remove object files:

```bash
make clean
```

Remove object files and the library:

```bash
make fclean
```

Rebuild everything:

```bash
make re
```

---

## Usage

Include the header in your C file:

```c
#include "ft_printf.h"
```

Compile your program with the library:

```bash
cc main.c libftprintf.a -o program
```

Run it:

```bash
./program
```

Example:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hex: %x\n", 255);
    return (0);
}
```

Output:

```text
Hello, world!
Number: 42
Hex: ff
```

---

## Return value

Like the original `printf`, `ft_printf` returns the number of characters printed.

Example:

```c
int count;

count = ft_printf("Hello\n");
ft_printf("Printed characters: %d\n", count);
```

---

## Important concepts

### Variadic functions

`ft_printf` uses variadic arguments, which allow a function to receive a variable number of arguments.

Useful macros from `<stdarg.h>`:

- `va_list`
- `va_start`
- `va_arg`
- `va_end`


### Pointer printing

The `%p` specifier prints an address in hexadecimal form.

A `NULL` pointer is usually printed as:

```text
(nil)
```

---

## Notes

This project does not implement the full original `printf`.

It only handles the conversions required by the 42 subject.

The project should avoid forbidden functions and must respect the 42 Norm.

Important goals:

- write clean C code
- handle edge cases
- avoid crashes with `NULL`
- correctly count printed characters
- create a reusable static library

---

## Author

Ara Melkonyan
