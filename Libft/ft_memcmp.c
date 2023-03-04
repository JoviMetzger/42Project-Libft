/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 13:35:01 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/10/30 08:37:46 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//compares two character arrays

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*cstr1;
	unsigned char	*cstr2;
	unsigned int	i;

	cstr1 = (unsigned char *)str1;
	cstr2 = (unsigned char *)str2;
	i = 0;
	while (n > i)
	{
		if (cstr1[i] != cstr2[i])
		{
			return (cstr1[i] - cstr2[i]);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	const char	str1[] = "what";
	const char	str2[] = "what";
	size_t	n = 2;

	printf("%d", ft_memcmp(str1, str2, n));
}*/
