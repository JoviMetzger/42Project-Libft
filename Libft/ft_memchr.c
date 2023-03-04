/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 12:49:39 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/10/30 08:37:25 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// searches for a character in a memory block
// i - character to search for
// n - number of byte to be analyzed

void	*ft_memchr(const void *str, int ch, size_t n)
{
	unsigned char	*cstr;
	unsigned char	find;
	unsigned int	i;

	cstr = (unsigned char *)str;
	find = (unsigned char)ch;
	i = 0;
	while (i < n)
	{
		if (cstr[i] == find)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	str[] = "hello";
	int	ch = 'e';
	size_t n = 4;

	printf("%s", ft_memchr(str, ch, n));
}*/
