/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 17:12:34 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/10/30 08:43:51 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//checks whether character is alphabetic & converts to upper case

int	ft_toupper(int value)
{
	if (value >= 'a' && value <= 'z')
		return (value = value -32);
	else
		return (value);
}

/*int	main(void)
{
	int	value = 'f';
	printf("%d", ft_toupper(value));
}*/
