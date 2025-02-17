/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/17 15:46:22 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

// Find the first substring in a length-limited string
char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (find[i] == '\0')
		return ((char *)str);
	while (str[i] && i < n)
	{
		j = 0;
		if (str[i] == find[j])
		{
			while (i + j < n && str[i + j] == find[j])
			{
				j++;
				if (!find[j])
					return ((char *)(str + i));
			}
		}
		i++;
	}
	return (0);
}

