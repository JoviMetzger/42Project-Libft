/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/16 12:07:13 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/linkedList.h"

//adds the node 'new' at the beginning of the list
//NOTE: (*new).next / new->next (means the same)

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
