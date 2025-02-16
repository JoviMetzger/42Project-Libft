/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/16 12:09:03 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

// Searches for a character in a memory block
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
