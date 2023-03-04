/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 07:07:34 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/10/30 08:42:59 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//removes all whitespace characters from the beginning and end of string
//unnecessary white you have in a string - in this case (*set)
//
//static() are restricted to the same file in which they are difined
//ft_set - because we nned to check if *set exist
//NOTE - it trims letters NOT words

static int	ft_set(char str, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (str == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		end;
	int		start;
	char	*trim;

	start = 0;
	while (s1[start] && ft_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_set(s1[end - 1], set))
		end--;
	trim = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!trim)
		return (NULL);
	i = 0;
	while (start < end)
	{
		trim[i] = s1[start];
		i++;
		start++;
	}
	trim[i] = '\0';
	return (trim);
}

/*int	main(void)
{
	char const s1[] = "Hello World";
	char const set[] = "World";
	printf("%s", ft_strtrim(s1, set));
}*/
