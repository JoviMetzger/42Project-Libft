/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 13:05:25 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/10/30 08:40:05 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. function is used to duplicate the content of one string onto another
//2. malloc - allocates the requested memory and returns a pointer to it
//
//3. use a pointer (p) to save the original pointer (str)

char	*ft_strdup(const char *str)
{
	char	*new;
	size_t	i;
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	new = (char *)malloc(sizeof(*new) * (len + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*int	main(void)
{
	const char str[] = "hello";
	printf("%s", ft_strdup(str));
}*/
