/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 07:09:08 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/11/02 07:48:01 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 1. count how many words are in the string (ft_count_word())
// - to know how many splits needed
// 2. need to free space (malloc/free) (ft_free())
// 3. split the words at the right index (ft_split())

static int	ft_count_word(char const *s, char c)
{
	int	cnt;
	int	i;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			cnt++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (cnt);
}

static char	**ft_free(char **s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != NULL)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	*from;
	char	**split;

	i = 0;
	split = (char **)malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			from = (char *)s;
			while (*s && *s != c)
				s++;
			split[i++] = ft_substr(from, 0, s - from);
			if (!**split)
				return (ft_free(split));
		}
		else
			s++;
	}
	split[i] = NULL;
	return (split);
}

/*int	main(void)
{
	char **array;
	char const s[] = "JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC";
	char c = ',';
	int	i;

	array = ft_split(s, c);
	printf("%d\n", ft_count_word(s, c));
	i = 0;
	while (array[i])
	{
		printf("%s\n", array[i]);
		i++;
	}
}*/
