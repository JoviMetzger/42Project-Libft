/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/16 12:09:52 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

//1. function is used to duplicate the content of one string onto another
//2. malloc - allocates the requested memory and returns a pointer to it
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
