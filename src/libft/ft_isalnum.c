/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/16 12:08:37 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

// Checks whether character is alphanumeric (alphabet/ number) or not
int	ft_isalnum(int alnum)
{
	if (((alnum >= 'a' && alnum <= 'z') || (alnum >= 'A' && alnum <= 'Z'))
		|| (alnum >= '0' && alnum <= '9'))
		return (alnum);
	else
		return (0);
}

/*int main (void)
{
	int alnum = 'a';
	int re = ft_isalnum(alnum);
	printf("%d", re);
}*/
