/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/16 12:09:11 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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
