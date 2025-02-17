/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/17 15:41:20 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

// Used to set a whole block of memory to a speciffic value
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

