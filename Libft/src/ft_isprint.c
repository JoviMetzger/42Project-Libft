/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/16 12:08:54 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

//checks if value is printable

int	ft_isprint(int value)
{
	if (value >= 32 && value <= 126)
		return (value);
	else
		return (0);
}

/*int	main(void)
{
	int	value = '	';
	int	re = ft_isprint(value);
	printf("%d", re);
}*/
