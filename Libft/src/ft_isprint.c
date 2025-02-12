/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 16:38:23 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/12 19:02:23 by jmetzger      ########   odam.nl         */
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
