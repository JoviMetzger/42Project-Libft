/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 17:53:06 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/10/30 08:38:53 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//used to set a whole block of memory to a speciffic value

void	*ft_memset(void *str, int ch, size_t n)
{
	unsigned char	*dest;
	unsigned int	i;

	dest = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		dest[i] = ch;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char str[] = "12some";
	int	ch = '$';
	size_t n = 2;

	ft_memset(str, ch, n);
	printf("%s", str);
}*/
