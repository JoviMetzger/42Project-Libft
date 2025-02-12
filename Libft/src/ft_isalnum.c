/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 08:55:44 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/12 19:02:23 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

//checks whether character is alphanumeric (alphabet/ number) or not

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
