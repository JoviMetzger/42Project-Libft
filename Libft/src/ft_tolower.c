/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/16 12:11:08 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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
