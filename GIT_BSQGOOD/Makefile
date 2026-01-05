# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgarot <dgarot@student.42luxembourg.lu>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/15 17:32:39 by dgarot            #+#    #+#              #
#    Updated: 2025/12/17 16:30:41 by dgarot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                  BSQ - 42                                    #
# **************************************************************************** #

NAME		:= bsq

CC			:= cc

INCLUDES	:= -I includes

CFLAGS		:= -Wall -Wextra -Werror

SRCS_DIR	:= srcs
OBJS_DIR	:= objs

SRCS		:= read_map.c \
			   print.c \
			   utils.c \
			   main.c \
			   parse_map.c \
			   parse_and_create.c \
			   free.c \
			   read_stdint.c \
			   solve.c \
			   solve_utils.c \

OBJS		:= $(SRCS:%.c=$(OBJS_DIR)/%.o)

RM			:= rm -f

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c includes/bsq.h | $(OBJS_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

clean:
	$(RM) $(OBJS)
	$(RM) -r $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all
