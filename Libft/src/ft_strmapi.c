/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 07:11:33 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/12 19:02:23 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

//applies the function (f) to each character of 
//the string (s) to create a new string

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int	i;
	int				len;
	char			*result;

	len = 0;
	i = 0;
	while (s[len] != '\0')
		len++;
	result = (char *)malloc(sizeof(*s) * (len + 1));
	if (result == 0)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
