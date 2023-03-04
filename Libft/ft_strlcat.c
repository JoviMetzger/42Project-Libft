/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 07:28:44 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/10/30 08:41:01 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*appends the contents of src to dest, creating a string at
most maxlen bytes long (including the '\0' terminator).
If src is already longer than maxlen bytes long, its contents
are not changed. Returns the length of the string that would be created without
truncation, excluding the '\0' terminator, or maxlen+strlen(src)
if no '\0' is found within maxlen bytes of *dest. (So if the
return value is >= maxlen, the result was truncated.)*/

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	char	*s;
	size_t	i;
	size_t	dest_len;

	s = (char *)src;
	dest_len = 0;
	while (dest_len < n && *dest)
	{
		dest++;
		dest_len++;
	}
	if (dest_len == n)
		return (dest_len + ft_strlen(src));
	i = 0;
	while (s[i] != '\0')
	{
		if (i < n - dest_len - 1)
		{
			*dest = s[i];
			dest++;
		}
		i++;
	}
	*dest = '\0';
	return (dest_len + i);
}	

/*int	main(void)
{
	char	dest[] = "something";
	const char src[] = "thing";
	size_t n = 2;

	printf("%zu", ft_strlcat(dest, src, n));
}*/
