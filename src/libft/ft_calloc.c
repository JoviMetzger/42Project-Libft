/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/16 12:08:33 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/* Allocate memory with malloc and fills that memory with zeros.
 * Better to use ft_calloc than malloc in projects
 */
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
