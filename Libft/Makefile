# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jmetzger <jmetzger@student.codam.n>          +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/14 07:17:37 by jmetzger      #+#    #+#                  #
#    Updated: 2022/12/07 13:39:06 by jmetzger      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

# 1. NAME - gives a name to our executable (the traditional a.out)
# 2. SRC - specifies all files with the .c extenstion that we want to compile together
# 3. OBJ - tranforms all .c to .o
# 4. Clean - to "redo" make, otherwise it will tell you "file up-to-date"
# 5. fclean - will first clean, than removes the excutable
# 6. re - first fclean, then rebuild all
# 7. PHONY - prevents conflict when you have a file named, clean, fclean, re

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
	  ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
	  ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_atoi.c \
	  ft_strnstr.c ft_strdup.c ft_calloc.c ft_substr.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c \
	  ft_putendl_fd.c ft_strjoin.c ft_striteri.c ft_strmapi.c ft_itoa.c ft_strtrim.c ft_split.c

BONUS_SRC = ft_lstnew.c ft_lstsize.c ft_lstadd_back.c ft_lstadd_front.c ft_lstlast.c \
			ft_lstdelone.c ft_lstiter.c ft_lstclear.c ft_lstmap.c

CC = gcc
CFLAGS = -Wall -Werror -Wextra

OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) 
	ar rc $(NAME) $(OBJ) 

bonus: $(NAME)
	ar rc $(NAME) $(BONUS_OBJ)
	
clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean:	
	rm -f $(OBJ) $(BONUS_OBJ)
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re bonus


# -------------------------------------------------------------------------------------
# ---------------------- WHITOUT BONUS ------------------------------------------------
# NAME = libft.a
# 
# SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
#	  ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
#	  ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_atoi.c \
#	  ft_strnstr.c ft_strdup.c ft_calloc.c ft_substr.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c \
#	  ft_putendl_fd.c ft_strjoin.c ft_striteri.c ft_strmapi.c ft_itoa.c ft_strtrim.c ft_split.c get_next_line.c \
#	  ft_lstnew.c ft_lstsize.c ft_lstadd_back.c ft_lstadd_front.c ft_lstlast.c ft_lstdelone.c ft_lstiter.c ft_lstclear.c \
#	  ft_lstmap.c ft_printf.c ft_printf_utils.c ft_printf_unsigned_int.c ft_printf_pointer.c ft_printf_hexadecimal.c
#
# OBJ = $(SRC:.c=.o)
#
# all: $(NAME)
#
# $(NAME): $(OBJ) 
#	@ar rc $(NAME) $(OBJ) 
#	
# clean:
#	@rm -f $(OBJ)
#
# fclean:	
#	@rm -f $(OBJ)
#	@rm -f $(NAME)
#
# re:	fclean all
#
# .PHONY: all clean fclean re
#
