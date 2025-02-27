/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/17 15:43:01 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

// Joins two string together
char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int	j;
	char	*join;
	int	len1 = (s1) ? ft_strlen(s1) : 0;
	int	len2 = (s2) ? ft_strlen(s2) : 0;

	join = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!join)
		return (NULL);
	i = 0;
	j = 0;
	while (s1 && s1[i] != '\0')
		join[j++] = s1[i++];
	i = 0;
	while (s2 && s2[i] != '\0')
		join[j++] = s2[i++];
	join[j] = '\0';
	return (join);
}
