/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 14:02:20 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/10/30 08:35:58 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//checks whether character is an alphabet (a-z and A-Z) or not

int	ft_isalpha(int letter)
{
	if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
		return (letter);
	else
		return (0);
}

/*int main (void) 
{
	int	letter = 'g';
	int re = ft_isalpha(letter);
	printf("%d", re);
}*/
