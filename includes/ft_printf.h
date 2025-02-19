/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/12 17:26:28 by jmetzger      #+#    #+#                 */
/*   Updated: 2025/02/19 12:00:07 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"

//ft_printf
int			ft_printf(const char *format, ...);
int			ft_putchar(char c);
int			ft_putstr(char *str);
int			ft_put_pointer(void *nbr, char *base);
int			ft_putnbr(int nbr);
int			ft_putnbr_unsigned(unsigned int nbr);
int			ft_hexadecimal(unsigned int nbr, char *base);
#endif


