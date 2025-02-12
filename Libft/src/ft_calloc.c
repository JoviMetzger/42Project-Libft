/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 13:00:14 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/12 19:02:23 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

//used to allocate multiple blocks of memory having the same size
//malloc allocates a single block - calloc allocates multipile blocks

void    *ft_calloc(size_t count, size_t n)
{
    void            *ptr;
    
    ptr = (void *)malloc(count * n);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, count);
    return (ptr);
}

/*int	main(void)
{
	size_t count = 5;
	size_t n = 2;

	printf("%d", ft_calloc(count, n));
}*/
