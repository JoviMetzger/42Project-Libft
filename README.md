# 📚 Libft

This repository contains my own C library, called "libft".

## About

The library was created as part of my 42_cursus program to rewrite standard C functions from scratch. The library(libft) contains a collection of functions with the same prototypes and expected behavior as the original functions in the standard C library (libc), but with the prefix 'ft_'  (ft_functionName).
It is a great way for a beginner to learn and understand C. <br><br>

🚩 ***NOTE:***
The library is a static library **(archive)**, <br>
therefore the executable is ending with `.a` -> *libft.a* <br>
A archive is created using the `ar` command. <br>
When a program is compiled and linked with a static library, <br>
the code from the library is copied into the final executable. <br>

```makefile
ar rcs libft.a file1.o file2.o file3.o
```

`ar:`   The archive command. <br>
`r:`    Replace existing files in the archive. <br>
`c:`    Create the archive if it doesn’t exist. <br>
`s:`    Add an index to make it easier for the linker to find symbols. <br><br><br>

♻️ ***Directories Include:***
- includes      **->** All the headerfiles
*(Including the headerfiles in the Makefile allows you to do <libft.h> instaed of "../includes/libft.h")*
INC_FILES 	:= libft.h linkedList.h ft_printf.h get_next_line.h
HEADERS 	:= $(addprefix $(INC_DIR), $(INC_FILES)))
- lib           **->** Custom implementations of standard C library functions
- GNL       	**->** Own get_next_line
- ft_printf		**->** Selfmade printf
- linked_list	**->** Basic linked list
- ft_dbltoa		**->** Converts float to char / double to char

## Installation

To install this library, follow the steps below:

1. Compile the library by running the following command:
```bash
$ make
```
2. You can create your own main() or use my main() which I have included below.

<details>
  <summary><strong>main.c</strong></summary>
  <br>

### Main()

This main() test all of the function. <br>
The main() doesn't test all the edge-cases of each function. <br>

```c
#include "includes/libft.h"
#include "includes/get_next_line.h"
#include "includes/ft_printf.h"
#include "includes/linkedList.h"

// 1) make
// 2) cc -Wall -Werror -Wextra main.c libft.a && ./a.out

int main() 
{
	// Test character functions
	printf("\nTest character functions\n");
	ft_toupper('a');
	ft_tolower('A');
	ft_isalpha('a');
	ft_isdigit('1');
	ft_isalnum('a');
	ft_isascii(127);
	ft_isprint(' ');

	// Test memory functions
	printf("Test memory functions\n");
	// char mem1[10];
	// char mem2[10];
	ft_memset("12some", '$', 2);
	ft_memcpy("llllo", "hething", 2);
	ft_memmove("aaaa", "123", 2);
	ft_memchr("hello", 'e', 4);
	ft_memcmp("what", "what", 2);

	// Test string functions
	printf("Test string functions\n");
	char *str1 = ft_strdup("Hello");
	char *str2 = ft_strjoin("Hello", " World");
	char *str3 = ft_strtrim("Hello World", "World");
	printf("%s\n%s\n%s\n\n", str1, str2, str3);
	// char dest[20];
	ft_strlcpy("hwllo", "world", 2);
	ft_strlcat("something", "thing", 2);
	ft_strchr("Hello", 'e');
	ft_strrchr("helnlo", 'l');
	ft_strnstr("Hello", "l", 4);
	ft_strncmp("sOme", "some", 3);
	ft_strlen("Hello");

	// Test conversion functions
	printf("Test conversion functions\n");
	ft_atoi("  12ab12");
	ft_itoa(123);
	ft_atoi_base("123", 16);

	// Test memory allocation functions
	printf("Test memory allocation functions\n");
	ft_bzero("12some", 2);
	ft_calloc(5, 2);

	// Test split and substring functions
	printf("Test split and substring functions\n");
	ft_split("JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC", ',');
	ft_substr("hello world", 7, 2);

	// Test file descriptor functions
	printf("Test file descriptor functions\n");
	ft_putchar_fd('A', 1);
	ft_putstr_fd("Hello", 1);
	ft_putnbr_fd(123, 1);
	ft_putendl_fd("Hello", 1);

	// Test get_next_line
	// Create a test.txt file
	printf("Test get_next_line\n");
	int fd = open("test.txt", O_RDONLY);
	get_next_line(fd);
	close(fd);

	// Test linked list functions
	printf("Test linked list functions\n");
	t_list *list = ft_lstnew("Hello");
	ft_lstadd_front(&list, ft_lstnew("World"));
	ft_lstadd_back(&list, ft_lstnew("42"));
	ft_lstsize(list);
	ft_lstlast(list);
	ft_lstclear(&list, free);

	// Test printf functions
	printf("Test printf functions\n");
	ft_printf("Hello %s\n", "World");

	return 0;
}

```

<br>
<br>

</details>

3. Finally, execute the program using the following command:
```bash
$ cc -Wall -Werror -Wextra main.c libft.a && ./a.out
```
