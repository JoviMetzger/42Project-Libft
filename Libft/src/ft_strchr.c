/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 19:11:56 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/12 19:02:23 by jmetzger      ########   odam.nl         */
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
