# ft_printf

*This project has been created as part of the 42 curriculum by ppourraj.*

---

# Description

The **ft_printf** project is a recreation of the standard C library function `printf()`.
The goal of this project is to better understand:

* Variadic functions
* Formatted output handling
* Memory management
* Parsing and conversion logic
* Low-level writing using the `write()` system call

This implementation reproduces the behavior of the original `printf` function for a set of mandatory conversions.

Supported conversions:

| Specifier | Description                              |
| --------- | ---------------------------------------- |
| `%c`      | Prints a single character                |
| `%s`      | Prints a string                          |
| `%p`      | Prints a pointer address                 |
| `%d`      | Prints a signed decimal integer          |
| `%i`      | Prints an integer                        |
| `%u`      | Prints an unsigned decimal integer       |
| `%x`      | Prints a hexadecimal number in lowercase |
| `%X`      | Prints a hexadecimal number in uppercase |
| `%%`      | Prints a percent sign                    |

The project focuses on reproducing the behavior of the original function while respecting the constraints imposed by the 42 subject.

---

# Instructions

## Compilation

To compile the library:

```bash
make
```

This will generate:

```bash
libftprintf.a
```

Cleaning Object Files

```bash
make clean
```

Full Clean :

```bash
make fclean 
```

Recompile Everything :

```bash
make re
```

---

# Usage

Include the header in your C file:

```c
#include "ft_printf.h"
```

Compile with:

```bash
cc main.c libftprintf.a
```

Example:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s!\n", "42");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hex: %x\n", 255);
    return (0);
}
```

Output:

```bash
Hello 42!
Number: 42
Hex: ff
```

---

# Algorithm & Data Structure Choices

## Parsing Strategy

The main algorithm used in this project is a **linear parser**.

The function iterates through the format string character by character:

1. If the current character is not `%`, it is written directly.
2. If `%` is encountered:

   * The next character is checked.
   * The corresponding conversion function is called.
3. Each helper function prints its content and returns the number of printed characters.
4. The total printed length is accumulated and returned at the end.

This approach is efficient because:

* The format string is traversed only once.
* No unnecessary memory allocation is required.
* Each conversion is separated into small reusable functions.

---

## Variadic Arguments

The project uses the `<stdarg.h>` library to handle a variable number of arguments.

Main macros used:

```c
va_list
va_start
va_arg
va_end
```

These allow the function to retrieve arguments dynamically depending on the conversion specifier encountered during parsing.

---

## Data Structure Choice

No complex data structures were necessary for this project.

The implementation mainly relies on:

* Character arrays (`char *`)
* Recursive integer printing
* Sequential parsing

For hexadecimal and pointer conversions, recursion is used to print digits from the most significant digit to the least significant digit.

Example idea:

```c
if (n >= 16)
    ft_puthex(n / 16);
ft_putchar(base[n % 16]);
```

This recursive approach keeps the implementation simple and readable.

---

# Resources

## Documentation & References

* [The Open Group printf Documentation](https://pubs.opengroup.org/onlinepubs/9699919799/functions/printf.html?utm_source=chatgpt.com)
* [cplusplus printf Reference](https://cplusplus.com/reference/cstdio/printf/?utm_source=chatgpt.com)
* [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/html_node/Formatted-Output-Functions.html?utm_source=chatgpt.com)
* [stdarg.h Reference](https://en.cppreference.com/w/c/variadic?utm_source=chatgpt.com)

---

## AI Usage

AI tools were used during the development of this project for:

* Understanding variadic functions
* Clarifying recursion concepts
* Reviewing edge cases
* Improving documentation and README structure

The implementation logic, coding, testing, and final behavior validation were completed manually.

---

# What I Learned

Through this project, I improved my understanding of:

* Variadic functions in C
* Recursive algorithms
* Edge case management
