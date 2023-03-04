/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 17:38:41 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/10/30 08:43:30 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//checks whether character is alphabetic & converts to lower case

int	ft_tolower(int value)
{
	if (value >= 'A' && value <= 'Z')
		return (value = value + 32);
	else
		return (value);
}

/*int	main(void)
{
	int value = 'F';
	printf("%d", ft_tolower(value));
}*/
