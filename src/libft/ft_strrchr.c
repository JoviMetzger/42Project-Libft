/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/17 15:46:39 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/* Returns the pointer to the last occurrence of 'n' in the given string.
 * 
 * strrchr(), locates the last occurrence of (n)
 * strchr(), locates the first occurrence of (n)
 */
char	*ft_strrchr(const char *str, int n)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)n)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}
