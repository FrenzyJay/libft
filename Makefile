#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 18:33:50 by jvincent          #+#    #+#              #
#    Updated: 2014/03/17 23:45:31 by garm             ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC =			gcc
NAME =			libft.a
CFLAGS =		-Wall -Werror -Wextra
CFLAGS +=		-I includes

SRCS =			puts/ft_putchar.c \
				puts/ft_putstr.c \
				puts/ft_putendl.c \
				puts/ft_error.c \
				strings/ft_strlen.c \
				strings/ft_strncmp.c \
				strings/ft_strcpy.c \
				strings/ft_strncpy.c \
				memory/ft_bzero.c \
				memory/ft_memset.c \
				memory/ft_memalloc.c \
				memory/ft_memdel.c

OBJ =			$(SRCS:.c=.o)

TESTNAME =		a.out
TEST =			test/main.c
TESTOBJ =		$(TEST:.c=.o)
LIB =			-L. -lft

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo Library done and sorted : $(NAME)

test: $(TESTOBJ)
	@$(CC) $(CFLAGS) $(TESTOBJ) $(LIB)

clean:
	@rm -f $(OBJ)
	@rm -f $(TESTOBJ)
	@echo Objects deleted : $(NAME)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(TESTNAME)
	@echo Library deleted : $(NAME)

re: fclean all

.PHONY: clean fclean re all
