/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/17 15:38:18 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

// Checks if value is printable
int	ft_isprint(int value)
{
	if (value >= 32 && value <= 126)
		return (value);
	else
		return (0);
}

