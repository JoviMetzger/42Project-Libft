/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 08:37:46 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/10/30 08:36:31 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
