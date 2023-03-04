/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 16:09:05 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/10/30 08:36:14 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//checks if the value is ascii character otherwise zero

int	ft_isascii(int value)
{
	if (value >= 0 && value <= 127)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int	value = 'w';
	int re = ft_isascii(value);
	printf("%d", re);
}*/
