/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/17 15:45:26 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/* Compares two character strings
 * with n being The maximum number of characters to be compared
 * NOTE:
 *  0 - str1 EQUAL to str2
 *  1 - str1 BIGGER than str2
 * -1 - str1 SMALLER than str2
 */
int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (n && *str1 && *str1 == *str2)
	{
		str1++;
		str2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*str1 - (unsigned char)*str2);
}


// ----------------------------------------------------------------------
// ------------------ MORE OPTIONS --------------------------------------
// Compares two character strings
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (!s1 && !s2)
		return (0);
	if (!s1 && s2)
		return (-1);
	if (s1 && !s2)
		return (1);
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] > s2[i])
			return (1);
		else
			return (-1);
	}
	return (0);
}
