# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/10 11:39:26 by cwenz             #+#    #+#              #
#    Updated: 2023/04/18 10:29:00 by cwenz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Name of library
NAME = libftprintf.a

#Compiler we need to use
CC = cc

# Flags we run with compiler
CFLAG = -c -Wall -Wextra -Werror

# All the source files (.c files)
SRCS = ft_printf.c ft_string_specifiers.c ft_number_specifiers.c ft_formatting_specifiers.c

# Convert all the .c files into .o files 
OBJS = $(SRCS:.c=.o)

# Make rule to Create the library
all: $(NAME)

# Make rule to create the library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Make rule to compile all c files
$(OBJS): $(SRCS)
	$(CC) $(CFLAG) $(SRCS)

# Make rule to delete all .o files
clean:
	rm -f $(OBJS)

# Make rule to delete all .o files and library
fclean: clean
	rm -f $(NAME)
re: fclean all

# Tells make that these are commands and not files
.PHONY: all clean fclean re
