/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/16 12:08:45 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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
