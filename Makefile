#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 18:33:50 by jvincent          #+#    #+#              #
#    Updated: 2014/03/25 17:53:43 by jibanez          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = 			gcc
NAME = 			libft.a
CFLAGS = 		-Wall -Werror -Wextra
CFLAGS += 		-I includes
SRCS =			io/ft_putchar.c \
				io/ft_putstr.c \
				io/ft_putendl.c \
				io/ft_putnbr.c \
				io/ft_error.c \
				strings/ft_strdup.c \
				strings/ft_strnew.c \
				strings/ft_strlen.c \
				strings/ft_strjoin.c \
				strings/ft_strncmp.c \
				strings/ft_strncpy.c \
				strings/ft_strdel.c \
				memory/ft_bzero.c \
				checks/ft_isprint.c
OBJ = 			$(SRCS:.c=.o)

TESTNAME = 		a.out
TEST = 			test/main.c
TESTOBJ = 		$(TEST:.c=.o)
LIB = 			-L. -lft

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

printf/%.o: printf/%.c
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
