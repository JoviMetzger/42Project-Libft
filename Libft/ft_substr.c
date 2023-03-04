/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 07:04:15 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/10/30 08:43:15 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//the substring begings at index (start) and is of maximum size (len)
//

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		j;
	size_t		i;
	char		*str;
	size_t		size;

	size = ft_strlen(s);
	if (size < len)
		len = size;
	str = (char *)malloc(sizeof(*s) *(len + 1));
	if (str == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

/*int	main(void)
{
	char const s[] = "hello world";
	unsigned int	start = 7;
	size_t	len = 2;
	printf("%s", ft_substr(s,start,len));

	return (0);
}*/
