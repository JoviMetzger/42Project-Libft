/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 12:18:27 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/10/30 08:42:04 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//compares two character strings

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

//NOTE: n - The maximum number of characters to be compared
// 0 - str1 EQUAL to str2
// 1 - str1 BIGGER than str2
//-1 - str1 SMALLER than str2

/*int	main(void)
{
	const char str1[] = "sOme";
	const char str2[] = "some";
	size_t	n = 3;

	int	re = ft_strncmp(str1, str2, n);
	printf("%d", re);
	return (0);
}*/


// ----------------------------------------------------------------------
// ------------------ MORE OPTIONS --------------------------------------
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
