/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/16 12:09:48 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

//returns the pointer to thr first occurrence of the needle in the given string.
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

/*int	main(void)
{
	const char str[] = "hello";
	int n = 'l';
	printf("%s", ft_strchr(str, n));
}*/
