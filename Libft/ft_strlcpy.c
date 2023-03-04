/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 17:23:57 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/10/30 08:41:17 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Copy src to string dst of size n.
At most n-1 characters will be copied.
Always NUL terminates (unless n == 0).
Returns strlen(src); if retval >= n, truncation occurred*/

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (src[i] && i < (n - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

/*int	main(void)
{
	char dest[100] = "hwllo";
	const char	src[100] = "world";
	size_t	n = 2;

	printf("%zu", ft_strlcpy(dest, src, n));
}*/
