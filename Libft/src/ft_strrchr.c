/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/16 12:10:52 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

//same as strchr(), except it locates the last occurrence (n)
//strchr() locates the first occurrence of (n)

char	*ft_strrchr(const char *str, int n)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)n)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	str[] = "helnlo";
	int n = 'l';
	printf("%s", ft_strrchr(str, n));
}*/
