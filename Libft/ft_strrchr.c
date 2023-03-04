/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 19:25:04 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/10/30 08:42:41 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
