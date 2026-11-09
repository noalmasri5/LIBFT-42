*This project has been created as part of the 42 curriculum by noalmasr.*

# Libft

## Description

Libft is my own C library: a collection of functions rewritten from scratch that I can reuse in later 42 projects. It is compiled into a static library called `libft.a`.

The goal of this project is to understand how common standard C library functions work, including string handling, memory management, character checking, and conversions. It also provides practice with memory allocation using `malloc` and `free`, as well as implementing and managing linked lists.

## Instructions

### Compilation

To compile the library, run:

```sh
make
```

The Makefile includes the following rules:

```sh
make        # Builds libft.a
make all    # Builds the library
make clean  # Removes object files
make fclean # Removes object files and libft.a
make re     # Rebuilds everything from scratch
```

### Usage

Include the library header in your C file:

```c
#include "libft.h"
```

Compile your program with the library:

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

## Library Description

### Part 1: Libc Functions

Re-implementations of standard C library functions with similar behaviour to the originals.

| Function | Description |
|---|---|
| `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` | Check character types |
| `ft_toupper`, `ft_tolower` | Convert letters to uppercase or lowercase |
| `ft_strlen` | Calculate the length of a string |
| `ft_strchr`, `ft_strrchr` | Find the first or last occurrence of a character |
| `ft_strncmp` | Compare two strings up to a specified number of characters |
| `ft_strnstr` | Locate a substring within a specified length |
| `ft_strlcpy`, `ft_strlcat` | Copy or append strings within a given buffer size |
| `ft_memset`, `ft_bzero` | Fill memory with a byte or zeros |
| `ft_memcpy`, `ft_memmove` | Copy memory, including overlapping memory areas with `ft_memmove` |
| `ft_memchr`, `ft_memcmp` | Search or compare memory areas |
| `ft_atoi` | Convert a string to an integer |
| `ft_calloc` | Allocate zero-initialized memory |
| `ft_strdup` | Create a dynamically allocated copy of a string |

### Part 2: Additional Functions

Functions that provide additional string manipulation, conversion, and file descriptor operations.

| Function | Description |
|---|---|
| `ft_substr` | Create a substring from a given string |
| `ft_strjoin` | Join two strings into a new string |
| `ft_strtrim` | Remove specified characters from the beginning and end of a string |
| `ft_split` | Split a string into an array of strings using a delimiter |
| `ft_itoa` | Convert an integer into a string |
| `ft_strmapi` | Apply a function to each character and create a new string |
| `ft_striteri` | Apply a function to each character of a string in place |
| `ft_putchar_fd` | Write a character to a file descriptor |
| `ft_putstr_fd` | Write a string to a file descriptor |
| `ft_putendl_fd` | Write a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Write an integer to a file descriptor |

### Part 3: Linked Lists

This part introduces linked lists and dynamic node management.

Each node uses the following structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

The `content` member can point to any type of data, while `next` points to the next node in the list. The last node points to `NULL`.

| Function | Description |
|---|---|
| `ft_lstnew` | Create a new list node |
| `ft_lstadd_front` | Add a node at the beginning of a list |
| `ft_lstadd_back` | Add a node at the end of a list |
| `ft_lstsize` | Count the number of nodes in a list |
| `ft_lstlast` | Return the last node of a list |
| `ft_lstdelone` | Delete one node and free its content |
| `ft_lstclear` | Delete and free all nodes in a list |
| `ft_lstiter` | Apply a function to the content of each node |
| `ft_lstmap` | Create a new list by applying a function to each node's content |

## Resources

The following resources were useful for understanding the functions and concepts involved in this project:

- `man` pages of the original C functions (for example, `man 3 strlen` and `man 3 memmove`).
- [C Reference – String and Memory Functions](https://en.cppreference.com/w/c/string/byte)
- [Linked Lists in C – GeeksforGeeks](https://www.geeksforgeeks.org/linked-list-data-structure/)
- 42 Norm and Norminette documentation.

### AI Usage

AI tools were used as a supplementary learning resource throughout the project to clarify programming concepts and support the learning process. They helped with understanding certain C functions, exploring implementation approaches, and reviewing technical questions related to pointers, strings, memory management, and linked lists.

The implementations were reviewed and tested to ensure a clear understanding of their functionality and behaviour.

## Author

**noalmasr**

42 Abu Dhabi