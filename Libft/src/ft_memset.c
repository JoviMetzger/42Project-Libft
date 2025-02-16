/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/16 12:09:21 by jmetzger      ########   odam.nl         */
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
