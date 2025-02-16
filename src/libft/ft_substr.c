/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/16 12:11:04 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/* The substring begings at index(start) and is of maximum size (len)
 * and it returns the string from index(start) to len
 */
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
