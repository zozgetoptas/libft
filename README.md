# libft - C Standard Library Implementation

![C](https://img.shields.io/badge/Language-C-blue?style=flat-square)
![License](https://img.shields.io/badge/License-42-green?style=flat-square)

> A comprehensive C library implementation including standard functions, string manipulation, memory operations, and linked list utilities. This project is part of the 42 School curriculum.

## 📋 Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Function Categories](#function-categories)
  - [Character Functions](#character-functions)
  - [String Functions](#string-functions)
  - [Memory Functions](#memory-functions)
  - [Conversion Functions](#conversion-functions)
  - [File Descriptor Functions](#file-descriptor-functions)
  - [Linked List Functions (Bonus)](#linked-list-functions-bonus)
- [Compilation](#compilation)
- [Testing](#testing)

---

## Overview

**libft** is a C library that recreates standard library functions and extends them with additional utilities. It's designed to be a foundational library for C projects, providing essential functions for string handling, memory management, and data structures.

## Features

- ✅ **Character Validation**: Functions to check character types (alphanumeric, digits, printable, ASCII)
- ✅ **String Operations**: Comprehensive string manipulation functions
- ✅ **Memory Management**: Safe memory operations with bounds checking
- ✅ **String Conversion**: Convert integers to strings and vice versa
- ✅ **File I/O**: Write data to file descriptors
- ✅ **Linked Lists**: Complete linked list implementation (bonus functions)
- ✅ **Zero Dependencies**: Pure C with only standard headers

## Installation

### Prerequisites

- GCC or Clang compiler
- Make (GNU Make)
- Standard C library

### Building

```bash
# Navigate to the project directory
cd libft

# Build the library
make

# Build library with bonus functions
make bonus
```

This creates `libft.a` static library file.

### Cleaning

```bash
# Remove object files
make clean

# Remove object files and the library
make fclean

# Clean and rebuild
make re
```

## Usage

### Basic Example

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    // String length
    size_t len = ft_strlen("Hello");  // Returns 5
    
    // String copy
    char dest[20];
    ft_strlcpy(dest, "Hello", sizeof(dest));
    
    // String join
    char *result = ft_strjoin("Hello", " World");
    
    // Character check
    if (ft_isalpha('A'))
        printf("A is alphabetic\n");
    
    // Integer to string
    char *num_str = ft_itoa(42);
    
    return 0;
}
```

### Linking the Library

```bash
gcc -o myprogram myprogram.c libft.a -lc
```

---

## Function Categories

### Character Functions

These functions check and manipulate individual characters:

| Function | Purpose | Returns |
|----------|---------|---------|
| `ft_isalpha(int c)` | Check if character is alphabetic (a-z, A-Z) | 1 if true, 0 if false |
| `ft_isdigit(int c)` | Check if character is a digit (0-9) | 1 if true, 0 if false |
| `ft_isalnum(int c)` | Check if character is alphanumeric | 1 if true, 0 if false |
| `ft_isascii(int c)` | Check if character is ASCII (0-127) | 1 if true, 0 if false |
| `ft_isprint(int c)` | Check if character is printable | 1 if true, 0 if false |
| `ft_toupper(int c)` | Convert character to uppercase | Converted character |
| `ft_tolower(int c)` | Convert character to lowercase | Converted character |

**Example:**
```c
ft_isalpha('A');      // Returns 1
ft_isdigit('5');      // Returns 1
ft_isalnum('a');      // Returns 1
ft_toupper('a');      // Returns 'A'
ft_tolower('Z');      // Returns 'z'
```

---

### String Functions

Core string manipulation and analysis:

| Function | Purpose |
|----------|---------|
| `ft_strlen(const char *str)` | Return length of string |
| `ft_strchr(const char *str, int ch)` | Find first occurrence of character |
| `ft_strrchr(const char *str, int ch)` | Find last occurrence of character |
| `ft_strlcpy(char *dest, const char *src, size_t size)` | Safe string copy with size limit |
| `ft_strlcat(char *dest, const char *src, size_t size)` | Safe string concatenation |
| `ft_strncmp(const char *s1, const char *s2, size_t n)` | Compare first n characters |
| `ft_strnstr(const char *s1, const char *s2, size_t len)` | Locate substring in string |
| `ft_strdup(const char *str)` | Duplicate string (allocates new memory) |
| `ft_substr(const char *s, unsigned int start, size_t len)` | Extract substring |
| `ft_strjoin(const char *s1, const char *s2)` | Join two strings |
| `ft_strtrim(const char *s, const char *set)` | Remove characters from beginning/end |
| `ft_split(const char *s, char delim)` | Split string by delimiter |
| `ft_strmapi(const char *s, char (*f)(unsigned int, char))` | Apply function to each character |
| `ft_striteri(char *s, void (*f)(unsigned int, char*))` | Apply function with index to each char |

**Example:**
```c
// String searching
char *pos = ft_strchr("Hello", 'l');     // Points to 'l'

// Safe copy with size limit
char buffer[10];
ft_strlcpy(buffer, "Hello World", 10);   // Doesn't overflow

// String joining
char *greeting = ft_strjoin("Hello", " World");

// String splitting
char **words = ft_split("one,two,three", ',');
// words[0] = "one", words[1] = "two", words[2] = "three"

// String trimming
char *trimmed = ft_strtrim("  hello  ", " ");  // Returns "hello"
```

---

### Memory Functions

Low-level memory operations:

| Function | Purpose |
|----------|---------|
| `ft_memset(void *dest, int ch, size_t count)` | Fill memory with value |
| `ft_memcpy(void *dest, const void *src, size_t n)` | Copy memory (non-overlapping) |
| `ft_memmove(void *dest, const void *src, size_t n)` | Copy memory (overlapping safe) |
| `ft_memcmp(const void *s1, const void *s2, size_t n)` | Compare memory areas |
| `ft_memchr(const void *str, int c, size_t n)` | Search memory for value |
| `ft_bzero(void *ch, size_t n)` | Zero-fill memory area |
| `ft_calloc(size_t nitems, size_t size)` | Allocate and zero-fill memory |

**Example:**
```c
// Fill array with zeros
int arr[10];
ft_bzero(arr, sizeof(arr));

// Allocate zeroed memory
int *memory = (int *)ft_calloc(100, sizeof(int));

// Copy memory
char src[] = "Hello";
char dest[20];
ft_memcpy(dest, src, 5);

// Find byte in memory
void *result = ft_memchr("Hello", 'l', 5);
```

---

### Conversion Functions

Data type conversions:

| Function | Purpose | Returns |
|----------|---------|---------|
| `ft_atoi(const char *ch)` | Convert string to integer | Integer value |
| `ft_itoa(int n)` | Convert integer to string | Dynamically allocated string |

**Example:**
```c
// String to integer
int num = ft_atoi("123");        // Returns 123
int neg = ft_atoi("-456");       // Returns -456

// Integer to string
char *str = ft_itoa(789);        // Returns "789"
char *zero = ft_itoa(0);         // Returns "0"
```

---

### File Descriptor Functions

Write data to file descriptors (stdout, stderr, files, etc.):

| Function | Purpose |
|----------|---------|
| `ft_putchar_fd(char c, int fd)` | Write single character to fd |
| `ft_putstr_fd(char *s, int fd)` | Write string to fd |
| `ft_putendl_fd(char *s, int fd)` | Write string with newline to fd |
| `ft_putnbr_fd(int n, int fd)` | Write integer to fd |

**Example:**
```c
#include <unistd.h>

// Write to standard output (fd = 1)
ft_putchar_fd('H', STDOUT_FILENO);        // Prints: H
ft_putstr_fd("Hello", STDOUT_FILENO);     // Prints: Hello
ft_putendl_fd("World", STDOUT_FILENO);    // Prints: World\n
ft_putnbr_fd(42, STDOUT_FILENO);          // Prints: 42

// Write to standard error (fd = 2)
ft_putstr_fd("Error", STDERR_FILENO);
```

---

### Linked List Functions (Bonus)

A complete linked list implementation:

#### Struct Definition

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

#### Operations

| Function | Purpose |
|----------|---------|
| `ft_lstnew(void *content)` | Create new list node |
| `ft_lstadd_front(t_list **lst, t_list *new)` | Add node to front of list |
| `ft_lstadd_back(t_list **lst, t_list *new)` | Add node to end of list |
| `ft_lstsize(t_list *lst)` | Count list nodes |
| `ft_lstlast(t_list *lst)` | Return last node |
| `ft_lstdelone(t_list *lst, void (*del)(void*))` | Delete single node |
| `ft_lstclear(t_list **lst, void (*del)(void*))` | Delete entire list |
| `ft_lstiter(t_list *lst, void (*f)(void *))` | Apply function to each node |
| `ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Create new list from mapped nodes |

**Example:**
```c
// Create and populate a list
t_list *list = NULL;
t_list *node1 = ft_lstnew("First");
t_list *node2 = ft_lstnew("Second");

ft_lstadd_back(&list, node1);
ft_lstadd_back(&list, node2);

// Get list size
int size = ft_lstsize(list);  // Returns 2

// Get last node
t_list *last = ft_lstlast(list);

// Apply function to each node
void print_content(void *content)
{
    printf("%s\n", (char *)content);
}
ft_lstiter(list, print_content);

// Free entire list
void free_content(void *content)
{
    free(content);
}
ft_lstclear(&list, free_content);
```

---

## Compilation

### Compile Flags

The library is compiled with appropriate flags for safety and performance:

```bash
CFLAGS = -Wall -Wextra -Werror
```

These flags enforce:
- All warnings enabled (`-Wall`)
- Extra warnings (`-Wextra`)
- Warnings treated as errors (`-Werror`)

### File List

The library consists of the following source files:

**Core Functions (35 files):**
- Character functions: `ft_isalpha.c`, `ft_isdigit.c`, `ft_isalnum.c`, `ft_isascii.c`, `ft_isprint.c`
- Conversion: `ft_atoi.c`, `ft_itoa.c`, `ft_toupper.c`, `ft_tolower.c`
- String operations: `ft_strlen.c`, `ft_strchr.c`, `ft_strrchr.c`, `ft_strlcpy.c`, `ft_strlcat.c`, `ft_strncmp.c`, `ft_strnstr.c`, `ft_strdup.c`, `ft_substr.c`, `ft_strjoin.c`, `ft_strtrim.c`, `ft_split.c`, `ft_strmapi.c`, `ft_striteri.c`
- Memory operations: `ft_bzero.c`, `ft_memset.c`, `ft_memcpy.c`, `ft_memmove.c`, `ft_memcmp.c`, `ft_memchr.c`, `ft_calloc.c`
- File I/O: `ft_putchar_fd.c`, `ft_putstr_fd.c`, `ft_putendl_fd.c`, `ft_putnbr_fd.c`

**Bonus Functions (9 files):**
- Linked list: `ft_lstnew_bonus.c`, `ft_lstadd_front_bonus.c`, `ft_lstadd_back_bonus.c`, `ft_lstsize_bonus.c`, `ft_lstlast_bonus.c`, `ft_lstdelone_bonus.c`, `ft_lstclear_bonus.c`, `ft_lstiter_bonus.c`, `ft_lstmap_bonus.c`

---

## Testing

To test the library, you can:

1. **Create a test program:**

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    // Test string functions
    printf("Length: %zu\n", ft_strlen("Hello"));
    
    // Test integer conversion
    printf("Number: %s\n", ft_itoa(42));
    
    // Test character functions
    printf("Is digit: %d\n", ft_isdigit('5'));
    
    return 0;
}
```

2. **Compile with the library:**

```bash
make
gcc -o test test.c libft.a
./test
```

---

## License

This project is part of the 42 School curriculum and follows their standards.

---

## Notes

- All string functions that allocate memory return dynamically allocated pointers that must be freed by the caller
- Memory functions expect valid pointers and correct buffer sizes
- Linked list functions require a deletion function to handle custom content
- The library follows the 42 School's strict coding style (Norm)

---

## Quick Reference

```c
// Include the library
#include "libft.h"

// Character checks
ft_isalpha(), ft_isdigit(), ft_isalnum(), ft_isascii(), ft_isprint()

// Case conversion
ft_toupper(), ft_tolower()

// String info
ft_strlen(), ft_strchr(), ft_strrchr(), ft_strncmp()

// String manipulation
ft_strdup(), ft_substr(), ft_strjoin(), ft_strtrim(), ft_split()

// Memory operations
ft_memset(), ft_memcpy(), ft_memmove(), ft_calloc(), ft_bzero()

// Conversion
ft_atoi(), ft_itoa()

// Output
ft_putchar_fd(), ft_putstr_fd(), ft_putendl_fd(), ft_putnbr_fd()

// Linked lists
ft_lstnew(), ft_lstadd_front(), ft_lstadd_back(), ft_lstsize(), ft_lstclear()
```
