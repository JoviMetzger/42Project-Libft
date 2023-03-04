/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/28 05:09:26 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/10/28 11:28:56 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Deletes and frees the given node and every successor of that node, using 
//the function ’del’ and free.

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*clear;

	if (!lst)
		return ;
	while (*lst)
	{
		clear = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = clear;
	}
}
