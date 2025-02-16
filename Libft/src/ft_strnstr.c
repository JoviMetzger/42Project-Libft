/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/16 12:10:48 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

//find the first substring in a length-limited string

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

/*int	main(void)
{
	const char str[] = "Hello";
	const char find = 'l';
	size_t	n = 4;

	printf("%s", ft_strnstr(str, find, n));
}*/
