# # **************************************************************************** #
# #                                                                              #
# #                                                         ::::::::             #
# #    Makefile                                           :+:    :+:             #
# #                                                      +:+                     #
# #    By: jmetzger <jmetzger@student.codam.nl>         +#+                      #
# #                                                    +#+                       #
# #    Created: 2022/10/14 07:17:37 by jmetzger      #+#    #+#                  #
# #    Updated: 2025/02/12 18:44:15 by jmetzger      ########   odam.nl          #
# #                                                                              #
# # **************************************************************************** #

# # 1. NAME - gives a name to our executable (the traditional a.out)
# # 2. SRC - specifies all files with the .c extenstion that we want to compile together
# # 3. OBJ - tranforms all .c to .o
# # 4. Clean - to "redo" make, otherwise it will tell you "file up-to-date"
# # 5. fclean - will first clean, than removes the excutable
# # 6. re - first fclean, then rebuild all
# # 7. PHONY - prevents conflict when you have a file named, clean, fclean, re

# # -------------------------------------------------------------------------------------
# # INCLUDING:
# # 	- ft_printf		-> selfmade printf
# # 	- get_next_line	-> own get next line
# #	- Linked List	-> basic linked list
# #	- ft_dbltoa		-> float to char / double to char

# # Compiler and flags
NAME 		= libft.a
CC 			= cc
CFLAGS		= -Wall -Wextra
CFLAGS		+= -Werror 		# Commend out while using '-g -fsanitize=address'
# CFLAGS		+= -g -fsanitize=address

# Colors
GREEN		= \033[32;1m
CORAL		= \033[38;2;255;127;80m
BOLD		= \033[1m
ITALIC		= \033[3m
UNDER 		= \033[4m
RESET		= \033[0m

# Directories
SRC_DIR		= src
OBJ_DIR		= obj

SRC 		=	$(SRC_DIR)/ft_toupper.c \
				$(SRC_DIR)/ft_tolower.c \
			 	$(SRC_DIR)/ft_isalpha.c \
				$(SRC_DIR)/ft_isdigit.c \
				$(SRC_DIR)/ft_isalnum.c \
				$(SRC_DIR)/ft_isascii.c \
				$(SRC_DIR)/ft_isprint.c \
				$(SRC_DIR)/ft_memset.c \
				$(SRC_DIR)/ft_memcpy.c \
				$(SRC_DIR)/ft_memmove.c \
				$(SRC_DIR)/ft_memchr.c \
				$(SRC_DIR)/ft_memcmp.c \
				$(SRC_DIR)/ft_strmapi.c \
				$(SRC_DIR)/ft_strjoin.c \
				$(SRC_DIR)/ft_striteri.c \
				$(SRC_DIR)/ft_strtrim.c \
				$(SRC_DIR)/ft_strlcpy.c \
				$(SRC_DIR)/ft_strlcat.c \
				$(SRC_DIR)/ft_strchr.c \
				$(SRC_DIR)/ft_strrchr.c \
				$(SRC_DIR)/ft_strnstr.c \
				$(SRC_DIR)/ft_strncmp.c \
				$(SRC_DIR)/ft_strdup.c \
				$(SRC_DIR)/ft_strlen.c \
				$(SRC_DIR)/ft_bzero.c \
				$(SRC_DIR)/ft_calloc.c \
				$(SRC_DIR)/ft_split.c \
				$(SRC_DIR)/ft_atoi.c \
				$(SRC_DIR)/ft_itoa.c \
				$(SRC_DIR)/ft_substr.c \
				$(SRC_DIR)/ft_putchar_fd.c \
				$(SRC_DIR)/ft_putstr_fd.c \
				$(SRC_DIR)/ft_putnbr_fd.c \
				$(SRC_DIR)/ft_putendl_fd.c \
				$(SRC_DIR)/GNL/get_next_line.c \
				$(SRC_DIR)/linkedList/ft_lstnew.c \
				$(SRC_DIR)/linkedList/ft_lstsize.c \
				$(SRC_DIR)/linkedList/ft_lstadd_back.c \
				$(SRC_DIR)/linkedList/ft_lstadd_front.c \
				$(SRC_DIR)/linkedList/ft_lstlast.c \
				$(SRC_DIR)/linkedList/ft_lstdelone.c \
				$(SRC_DIR)/linkedList/ft_lstiter.c \
				$(SRC_DIR)/linkedList/ft_lstclear.c \
				$(SRC_DIR)/linkedList/ft_lstmap.c \
				$(SRC_DIR)/ft_printf/ft_printf.c \
				$(SRC_DIR)/ft_printf/ft_printf_utils.c \
				$(SRC_DIR)/ft_printf/ft_printf_unsigned_int.c \
				$(SRC_DIR)/ft_printf/ft_printf_pointer.c \
				$(SRC_DIR)/ft_printf/ft_printf_hexadecimal.c


# Object Directory
OBJ_DIR 		= obj

# Object files (keeping subdirectories)
OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

# Create directories dynamically
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@mkdir -p $(dir $@)  # Ensures subdirectories exist
	@$(CC) $(CFLAGS) -c $< -o $@

# Ensure obj directory exists
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# Targets
all: $(NAME)

$(NAME): $(OBJ) 
	ar rc $(NAME) $(OBJ) 
	@echo "$(CORAL) $(UNDER) $(BOLD) $(ITALIC)   ✨Libft Done✨      $(RESET)"

# Clean	
clean:
	rm -rf $(OBJ_DIR)
	@echo "$(GREEN) $(ITALIC) ✅ Cleaned object files ✅$(RESET)"

fclean:	clean
	rm -rf $(NAME)
	@echo "$(GREEN) $(ITALIC)   ✅ Cleaned executable ✅$(RESET)"

re:	fclean all

.PHONY: all clean fclean re



# NAME := libft.a
# COMPILER := gcc
# RM := rm -rf

# # Compiler flags
# CFLAGS += -MMD -MP
# CFLAGS += -g

# # Build directory for objects and dependencies
# BUILD_DIR := .build/
# INC_DIR := includes/
# SRC_DIR := src/

# # Source files
# LIB := ft_toupper.c \
# 	ft_tolower.c \
# 	ft_isalpha.c \
# 	ft_isdigit.c \
# 	ft_isalnum.c \
# 	ft_isascii.c \
# 	ft_isprint.c \
# 	ft_memset.c \
# 	ft_memcpy.c \
# 	ft_memmove.c \
# 	ft_memchr.c \
# 	ft_memcmp.c \
# 	ft_strmapi.c \
# 	ft_strjoin.c \
# 	ft_striteri.c \
# 	ft_strtrim.c \
# 	ft_strlcpy.c \
# 	ft_strlcat.c \
# 	ft_strchr.c \
# 	ft_strrchr.c \
# 	ft_strnstr.c \
# 	ft_strncmp.c \
# 	ft_strdup.c \
# 	ft_strlen.c \
# 	ft_bzero.c \
# 	ft_calloc.c \
# 	ft_split.c \
# 	ft_atoi.c \
# 	ft_itoa.c \
# 	ft_substr.c \
# 	ft_putchar_fd.c \
# 	ft_putstr_fd.c \
# 	ft_putnbr_fd.c \
# 	ft_putendl_fd.c

# LLIST := ft_lstnew.c \
# 	ft_lstsize.c \
# 	ft_lstadd_back.c \
# 	ft_lstadd_front.c \
# 	ft_lstlast.c \
# 	ft_lstdelone.c \
# 	ft_lstiter.c \
# 	ft_lstclear.c \
# 	ft_lstmap.c

# GNL := get_next_line.c

# PRINTF := ft_printf.c \
# 	ft_printf_utils.c \
# 	ft_printf_unsigned_int.c \
# 	ft_printf_pointer.c \
# 	ft_printf_hexadecimal.c

# # Combine all sources
# SRCS			:=	$(addprefix $(SRC_DIR)libft/, $(LIB))			\
# 					$(addprefix $(SRC_DIR)linkedList/, $(LLIST))	\
# 					$(addprefix $(SRC_DIR)GNL/, $(GNL))				\
# 					$(addprefix $(SRC_DIR)ft_printf/, $(PRINTF))

# # Generate object file names by replacing src/ with .build/
# OBJS := $(SRCS:%.c=$(BUILD_DIR)%.o)

# # Generate dependency files
# DEPS := $(OBJS:.o=.d)

# # Header files
# HEADERS_FILES := libft.h linkedList.h ft_printf.h get_next_line.h
# HEADERS := $(addprefix $(INC_DIR), $(HEADERS_FILES))

# # Default target
# all: $(NAME)

# # Main target
# $(NAME): $(OBJS)
# 	ar rcs $(NAME) $(OBJS)

# # Pattern rule for object files
# $(BUILD_DIR)src/%.o: src/%.c $(HEADERS)
# 	@mkdir -p $(@D)
# 	$(COMPILER) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

# clean:
# 	@$(RM) $(BUILD_DIR)

# fclean: clean
# 	@$(RM) $(NAME)

# re: fclean all

# print-%:
# 	$(info $($*))

# # Include dependencies
# -include $(DEPS)

# .PHONY: all clean fclean re print-%