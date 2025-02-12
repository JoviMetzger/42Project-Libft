/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 13:15:22 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/10/30 08:35:37 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//converts a string argument to an integer
//stops when encounters the first non-number character
//skips all white space at the beginning of string

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] == ' ') || (str[i] == '\f')
		|| (str[i] == '\n') || (str[i] == '\r')
		|| (str[i] == '\t') || (str[i] == '\v'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}

/*int	main(void)
{
	const char str[] = "  12ab12";
	int re = ft_atoi(str);
	printf("%d", re);
}*/


// ------------------------------------------------------------------------
// ft_atoi_base()
int input_check(char c) 
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
