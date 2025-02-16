/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/16 12:11:12 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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
