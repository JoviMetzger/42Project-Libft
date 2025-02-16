/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/16 12:08:49 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

//checks whether character is a digit (0-9) or not

int	ft_isdigit(int digit)
{
	if (digit >= '0' && digit <= '9')
		return (digit);
	else
		return (0);
}

/*int	main (void)
{
	int	digit = '0';
	int re = ft_isdigit(digit);
	printf("%d", re);
}*/
