/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/19 12:07:41 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

// ft_atoi_base()
static int input_check(char c) 
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'))
		return (0);
	else 
		return (1);
}

int ft_atoi_base(const char *str, int base) 
{
	int i;
	int result;
	int sign;
	int digit;

	i = 0;
	result = 0;
	sign = 1;
	digit = 0;
	if (str[i] == '-' || str[i] == '+') 
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0' && input_check(str[i]) == 0)
	{
		if (str[i] >= 'a' && str[i] <= 'f')
			digit = str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			digit = str[i] - 'A' + 10;
		else if (str[i] >= '0' && str[i] <= '9')
			digit = str[i] - '0';
		result = result * base + digit;
		i++;
	}
	return (result * sign);
}
