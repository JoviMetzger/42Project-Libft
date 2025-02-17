/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/17 15:38:34 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/* 1. take a number as argument
 * 2. ft_len to find out how many numbers/digits are there
 * 3. ft_division is needed to know how many 0 needed to get thr first digit 
 */

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

// ---------------------------------------------------------------------------------
// -----------------  Shorter version  ---------------------------------------------
// only takes an int*
/*
size_t ft_get_length(int *result)
{
    size_t len = 0;
    while (result[len] != -1) // Assume -1 is the sentinel value
        len++;
    return len;
}

char *ft_itoa(int *result)
{
	size_t len = ft_get_length(result);
 	char *resultStr = (char *)malloc(len + 2); // +2 for possible '-' and '\0'

    	size_t start = 0;
    	while (start < len && result[start] == 0)
        	start++; // Skip leading zeros

    	size_t k = 0;
    	for (size_t i = start; i <= len; i++)
        	resultStr[k++] = result[i] + '0'; // Copy str including '\0'
    
    	if (k == 0) // If result is 0
       		resultStr = ft_strdup("0");
    	return resultStr;
}
*/
