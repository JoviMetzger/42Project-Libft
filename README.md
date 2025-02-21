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
  <summary><strong> ✉️ main.c</strong></summary>
  <br>

### Main()

This main() test all of the function. <br>
The main() doesn't test all the edge-cases of each function. <br>

```c
#include "includes/libft.h"
#include "includes/get_next_line.h"
#include "includes/ft_printf.h"
#include "includes/linkedList.h"
#include "includes/ft_dbltoa.h"

// 1) make
// 2) cc -Wall -Werror -Wextra main.c libft.a && ./a.out

int main() 
{
	// Test character functions
	printf("\nTest character functions\n");
	printf("toupper('a') : %c\n", ft_toupper('a'));
	printf("tolower('A') : %c\n", ft_tolower('A'));
	printf("isalpha('a') : %d\n", ft_isalpha('a'));
	printf("isdigit('1') : %d\n", ft_isdigit('1'));
	printf("isalnum('a') : %d\n", ft_isalnum('a'));
	printf("isascii(127) : %d\n", ft_isascii(127));
	printf("isprint(' ') : %d\n", ft_isprint(' '));

	// Test memory functions
	printf("\nTest memory functions\n");
	char memset_test[] = "12some";
	ft_memset(memset_test, '$', 2);
	printf("memset : %s\n", memset_test);
	
	char memcpy_src[] = "hething";
	char memcpy_dest[] = "llllo";
	ft_memcpy(memcpy_dest, memcpy_src, 2);
	printf("memcpy : %s\n", memcpy_dest);
	
	char memmove_src[] = "123";
	char memmove_dest[] = "aaaa";
	ft_memmove(memmove_dest, memmove_src, 2);
	printf("memmove : %s\n", memmove_dest);
	
	printf("memchr : %s\n", (char *)ft_memchr("hello", 'e', 4));
	printf("memcmp : %d\n", ft_memcmp("what", "what", 2));

	// Test string functions
	printf("\nTest string functions\n");
	printf("strdup : %s\n", ft_strdup("Hello"));
	printf("strjoin : %s\n", ft_strjoin("Hello", " World"));
	printf("strtrim : %s\n", ft_strtrim("Hello World", "World"));
	
	char strlcpy_dest[10] = "hwllo";
	ft_strlcpy(strlcpy_dest, "world", sizeof(strlcpy_dest));
	printf("strlcpy : %s\n", strlcpy_dest);
	
	char strlcat_dest[20] = "something";
	ft_strlcat(strlcat_dest, "thing", sizeof(strlcat_dest));
	printf("strlcat : %s\n", strlcat_dest);
	
	printf("strchr : %s\n", ft_strchr("Hello", 'e'));
	printf("strrchr : %s\n", ft_strrchr("helnlo", 'l'));
	printf("strnstr : %s\n", ft_strnstr("Hello", "l", 4));
	printf("strncmp : %d\n", ft_strncmp("sOme", "some", 3));
	printf("strlen : %zu\n", ft_strlen("Hello"));

	// Test conversion functions
	printf("\nTest conversion functions\n");
	printf("atoi : %d\n", ft_atoi("  12ab12"));
	printf("itoa : %s\n", ft_itoa(123));
	printf("atoi_base : %d\n", ft_atoi_base("123", 16));

	// Test split and substring functions
	printf("\nTest split and substring functions\n");
	char **split_result = ft_split("JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC", ',');
	for (int i = 0; split_result[i] != NULL; i++)
	{
		printf("split[%d] : %s\n", i, split_result[i]);
		free(split_result[i]);
	}
	free(split_result);
	printf("substr : %s\n", ft_substr("hello world", 6, 5));

	// Test file descriptor functions
	printf("\nTest file descriptor functions\n");
	ft_putchar_fd('H', 1);
	ft_putstr_fd("ello", 1);
	ft_putnbr_fd(123, 1);
	ft_putendl_fd("World", 1);

	// Test get_next_line
	printf("\nTest get_next_line\n");
	int fd = open("test.txt", O_RDONLY); // Create a test.txt file fot testing
	if (fd != -1)
	{
		char *line = get_next_line(fd);
		if (line)
		{
			printf("get_next_line : %s\n", line);
			free(line);
		}
		close(fd);
	}
	else
		printf("Could not open test.txt\n");

	// Test linked list functions
	printf("\nTest linked list functions\n");
	t_list *list = ft_lstnew("Hello");
	ft_lstadd_front(&list, ft_lstnew("World"));
	ft_lstadd_back(&list, ft_lstnew("42"));

	printf("lstsize : %d\n", ft_lstsize(list));
	printf("lstlast : %s\n", (char *)ft_lstlast(list)->content);

	// Test printf functions
	printf("\nTest printf functions\n");
	ft_printf("Hello %s\n", "World");

	// Test ft_dbltoa functions
	printf("\nTest ft_dbltoa functions\n");
	double input = __DBL_MIN__;
	double input1 = __DBL_MAX__;
	float input2 = -1231246524059005808017408.0f;
	double input3 = -123126877777777781062520432865268252910947010799856319324944859136.0;
	double input4 = 0.1234567891234567837965840908509562723338603973388671875;
	double input5 = -1234567837723.123535;

	char *output = ft_dbltoa(input);
	char *output1 = ft_dbltoa(input1);
	char *output2 = ft_dbltoa(input2);
	char *output3 = ft_dbltoa(input3);
	char *output4 = ft_dbltoa(input4);
	char *output5 = ft_dbltoa(input5);

	printf("MY value: %s\n", output);
	printf("OG value: %.1024f\n\n", input);

	printf("MY value: %s\n", output1);
	printf("OG value: %f\n\n", input1);

	printf("MY value: %s\n", output2);
	printf("OG value: %f\n\n", input2);

	printf("MY value: %s\n", output3);
	printf("OG value: %f\n\n", input3);

	printf("MY value: %s\n", output4);
	printf("OG value: %f\n\n", input4);

	printf("MY value: %s\n", output5);
	printf("OG value: %f\n\n", input5);

	// -------------------------------------------------------------------------------

	double test = 1.0 / 0.0; // Division by zero creates +∞
	double test1 = -1.0 / 0.0; // Negative division by zero creates -∞
	double test2 = 0.0 / 0.0; // 0 divided by 0 produces NaN

	char *str = ft_dbltoa(test);
	char *str1 = ft_dbltoa(test1);
	char *str2 = ft_dbltoa(test2);

	printf("MY value:  %s -> OG value:  %f\n", str, test);
	printf("MY value: %s -> OG value: %f\n", str1, test1);
	printf("MY value:  %s -> OG value:  %f\n", str2, test2);

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
