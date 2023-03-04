/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 19:38:02 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/10/29 09:08:08 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*dest;
	unsigned int	i;

	dest = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
}

/*int	main(void)
{
	char str[] = "12some";
	size_t n = 2;

	ft_bzero(str, n);
	printf("%s", str);
}*/
