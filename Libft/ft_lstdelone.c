/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/28 05:07:17 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/10/28 07:50:03 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Takes as a parameter a node and frees the memory of the node’s content 
//using the function ’del’ given as a parameter and free the node

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst -> content);
	free(lst);
}
