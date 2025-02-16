/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_hexadecimal.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/16 12:06:33 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

// PRINT_HEXADECIMAL FUNCTION
static int	hex_len(unsigned int nbr)
{
	int	len;

	len = 0;
	while (nbr)
	{
		len++;
		nbr /= 16;
	}
	return (len);
}

static char	*ft_hex_convert(unsigned int nbr, char *base)
{
	char	*hex;
	int		len;

	len = hex_len(nbr);
	hex = (char *)malloc(sizeof(char) * (len + 1));
	if (!hex)
		return (0);
	hex[len] = '\0';
	while (len > 0)
	{
		hex[len - 1] = *(nbr % 16 + base);
		nbr /= 16;
		len--;
	}
	return (hex);
}

int	ft_hexadecimal(unsigned int nbr, char *base)
{
	char	*str;
	int		len;

	if (nbr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	str = ft_hex_convert(nbr, base);
	len = ft_putstr(str);
	free(str);
	return (len);
}
