/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 18:05:07 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/12 18:13:06 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include "includes/get_next_line.h"
#include "includes/ft_printf.h"
#include "includes/linkedList.h"

// 1) make
// 2) cc -Wall -Werror -Wextra main.c libft.a && ./a.out

void test_functions() 
{
	// Test character functions
	ft_toupper('a');
	ft_tolower('A');
	ft_isalpha('a');
	ft_isdigit('1');
	ft_isalnum('a');
	ft_isascii(127);
	ft_isprint(' ');

	// Test memory functions
	char mem1[10];
	char mem2[10];
	ft_memset(mem1, 'A', 10);
	ft_memcpy(mem2, mem1, 10);
	ft_memmove(mem2, mem1, 10);
	ft_memchr(mem1, 'A', 10);
	ft_memcmp(mem1, mem2, 10);

	// Test string functions
	char *str1 = ft_strdup("Hello");
	char *str2 = ft_strjoin("Hello", " World");
	ft_striteri(str2, [](unsigned int i, char *c) { *c = ft_toupper(*c); });
	char *str3 = ft_strtrim("  Hello  ", " ");
	char dest[20];
	ft_strlcpy(dest, "Hello", 20);
	ft_strlcat(dest, " World", 20);
	ft_strchr("Hello", 'e');
	ft_strrchr("Hello", 'l');
	ft_strnstr("Hello World", "World", 11);
	ft_strncmp("Hello", "World", 5);
	ft_strlen("Hello");

	// Test conversion functions
	ft_atoi("123");
	ft_itoa(123);

	// Test memory allocation functions
	ft_bzero(mem1, 10);
	ft_calloc(10, sizeof(int));

	// Test split and substring functions
	ft_split("Hello World", ' ');
	ft_substr("Hello World", 6, 5);

	// Test file descriptor functions
	ft_putchar_fd('A', 1);
	ft_putstr_fd("Hello", 1);
	ft_putnbr_fd(123, 1);
	ft_putendl_fd("Hello", 1);

	// Test get_next_line
	int fd = open("test.txt", O_RDONLY);
	get_next_line(fd);
	close(fd);

	// Test linked list functions
	t_list *list = ft_lstnew("Hello");
	ft_lstadd_front(&list, ft_lstnew("World"));
	ft_lstadd_back(&list, ft_lstnew("42"));
	ft_lstsize(list);
	ft_lstlast(list);
	ft_lstiter(list, [](void *content) { ft_putstr_fd((char *)content, 1); });
	ft_lstclear(&list, free);

	// Test printf functions
	ft_printf("Hello %s\n", "World");
	ft_putnbr(123);
	ft_putnbr_unsigned(123);
	ft_put_pointer((void *)123, "0123456789abcdef");
	ft_hexadecimal(123, "0123456789abcdef");
}

int main() 
{
	test_functions();
	return 0;
}