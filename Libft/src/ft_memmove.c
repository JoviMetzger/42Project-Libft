/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/16 12:09:16 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*memmove() copies a number of bytes(n) from the location 
pointed by source(src) to the memory block pointed by destination.*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest <= src)
	{
		while (n > i)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	else if (dest > src)
	{
		while (n > 0)
		{
			((char *)dest)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	return (dest);
}

/*int	main(void)
{
	char	dest[100] = "aaaa";
	const char	src[100] = "123";
	size_t	n = 2;

	printf("%s", ft_memmove(dest, src, n));
}*/
