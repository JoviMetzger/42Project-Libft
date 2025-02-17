/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/17 15:44:21 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/* Appends the contents of src to dest, creating a string at
 * most maxlen bytes long (including the '\0' terminator).
 *
 * If src is already longer than maxlen bytes long, its contents are not changed. 
 * 
 * Returns the length of the string that would be created without
 * truncation, excluding the '\0' terminator, or maxlen+strlen(src)
 * if no '\0' is found within maxlen bytes of *dest. 
 * (So if the return value is >= maxlen, the result was truncated.)
 */
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


// ------------------------------------------------------------------
// --------------- MORE OPTIONS -------------------------------------
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0')
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (dest);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[k + i] = src[i];
		i++;
	}
	dest[k + i] = '\0';
	return (dest);
}
