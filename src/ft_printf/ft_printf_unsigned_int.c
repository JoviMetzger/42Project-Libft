/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_unsigned_int.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/16 12:06:52 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

// PRINT_UNSIGNED_INT FUNCTION

static int	nbr_len(unsigned int nbr)
{
	int	len;

	len = 0;
	while (nbr)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

char	*ft_uitoa(unsigned int nbr)
{
	char	*num;
	int		len;

	len = nbr_len(nbr);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (nbr)
	{
		num[len - 1] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (num);
}

int	ft_putnbr_unsigned(unsigned int nbr)
{
	char	*str;
	int		len;

	if (nbr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	str = ft_uitoa(nbr);
	len = ft_putstr(str);
	free(str);
	return (len);
}
