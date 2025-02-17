/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/17 15:42:22 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

// Returns the pointer to the first occurrence of 'n' in the given string.
char	*ft_strchr(const char *str, int n)
{
	while (*str != (char)n)
	{
		if (!*str)
			return (NULL);
		str++;
	}
	return ((char *)str);
}
