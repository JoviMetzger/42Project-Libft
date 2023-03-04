/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/21 11:52:28 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/10/30 09:37:22 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. take a number as argument
//2. ft_len to find out how many numbers/digits are there
//3. ft_division is needed to know how many 0 needed to get thr first digit 

static int	ft_len(long int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static int	ft_division(int len)
{
	int		div;

	div = 1;
	while (len > 0)
	{
		div = div * 10;
		len--;
	}
	return (div);
}

char	*ft_itoa(int n)
{
	char			*result;
	int				len;
	long int		nb;
	int				div;

	len = ft_len(n);
	nb = n;
	result = (char *)malloc(sizeof(char) * (len + 2));
	if (result == 0)
		return (NULL);
	div = ft_division(len - 1);
	len = 0;
	if (nb < 0)
	{
		result[len++] = '-';
		nb = nb * -1;
	}
	while (div > 0)
	{
		result[len++] = (nb / div % 10) + '0';
		div = div / 10;
	}
	result[len] = '\0';
	return (result);
}

/*int	main(void)
{
	int	n = -0;
	//int len = ft_len(n);
	//printf("%d\n", ft_len(n));
	//printf("%d\n", ft_division(len));
	printf("%s", ft_itoa(n));
}*/
