/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 17:53:06 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/12 19:02:23 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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
