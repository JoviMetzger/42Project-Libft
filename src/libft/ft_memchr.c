/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/17 15:39:16 by jmetzger      ########   odam.nl         */
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

