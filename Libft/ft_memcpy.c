/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 12:06:05 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/10/30 08:38:07 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*cdest;
	unsigned char	*csrc;
	unsigned int	i;

	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	dest[100] = "llllo";
	const char	src[100] = "hething";
	size_t	n = 2;

	printf("%s", ft_memcpy(dest, src, n));
}*/
