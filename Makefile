# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jmetzger <jmetzger@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/14 07:17:37 by jmetzger      #+#    #+#                  #
#    Updated: 2025/02/17 15:57:19 by jmetzger      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

# 1. NAME - gives a name to our executable (the traditional a.out)
# 2. SRC - specifies all files with the .c extenstion that we want to compile together
# 3. OBJ - tranforms all .c to .o
# 4. Clean - to "redo" make, otherwise it will tell you "file up-to-date"
# 5. fclean - will first clean, than removes the excutable
# 6. re - first fclean, then rebuild all
# 7. PHONY - prevents conflict when you have a file named, clean, fclean, re

# Compiler and flags
NAME 		= libft.a
CC 		= cc
CFLAGS		= -Wall -Wextra
CFLAGS		+= -Werror 		# Commend out while using '-g -fsanitize=address'
# CFLAGS	+= -g -fsanitize=address
CFLAGS 		+= -MMD -MP

# Colors
GREEN		= \033[32;1m
CORAL		= \033[38;2;255;127;80m
BOLD		= \033[1m
ITALIC		= \033[3m
UNDER 		= \033[4m
RESET		= \033[0m

# Directories
OBJ_DIR 	:= .obj/
INC_DIR 	:= includes/
SRC_DIR 	:= src/

# Source files
LIB 		:= ft_toupper.c \
				ft_tolower.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_memset.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strmapi.c \
				ft_strjoin.c \
				ft_striteri.c \
				ft_strtrim.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strnstr.c \
				ft_strncmp.c \
				ft_strdup.c \
				ft_strlen.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_split.c \
				ft_atoi.c \
				ft_atoi_base.c \
				ft_itoa_base.c \
				ft_itoa.c \
				ft_substr.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putnbr_fd.c \
				ft_putendl_fd.c

LLIST 		:= ft_lstnew.c \
				ft_lstsize.c \
				ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstlast.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstclear.c \
				ft_lstmap.c

GNL 		:= get_next_line.c

PRINTF 		:= ft_printf.c \
				ft_printf_utils.c \
				ft_printf_unsigned_int.c \
				ft_printf_pointer.c \
				ft_printf_hexadecimal.c

# Combine all sources
SRCS		:=	$(addprefix $(SRC_DIR)libft/, $(LIB)) \
				$(addprefix $(SRC_DIR)linkedList/, $(LLIST)) \
				$(addprefix $(SRC_DIR)GNL/, $(GNL)) \
				$(addprefix $(SRC_DIR)ft_printf/, $(PRINTF))

# Generate object file names
OBJS 		:= $(SRCS:%.c=$(OBJ_DIR)%.o)

# Generate dependency files
DEPS 		:= $(OBJS:.o=.d)

# Header files (Including the headerfiles allows you to do <libft.h> instaed of "../includes/libft.h")
INC_FILES 	:= libft.h linkedList.h ft_printf.h get_next_line.h
HEADERS 	:= $(addprefix $(INC_DIR), $(INC_FILES))

# Targets
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@echo "$(CORAL) $(UNDER) $(BOLD) $(ITALIC)   ✨Libft Done✨$(RESET)"

$(OBJ_DIR)src/%.o: src/%.c $(HEADERS)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

# Clean	
clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(GREEN) $(ITALIC) ✅ Cleaned object files ✅$(RESET)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(GREEN) $(ITALIC)   ✅ Cleaned executable ✅$(RESET)"

re: fclean all

# Print for debugging (example: print-SRC)
print-%:
	$(info $($*))

# Include dependencies
-include $(DEPS)

.PHONY: all clean fclean re print-%
