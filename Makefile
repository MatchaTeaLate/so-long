# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anovikav <anovikav@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/30 10:21:07 by anovikav          #+#    #+#              #
#    Updated: 2023/01/28 06:18:04 by anovikav         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

CC = cc

CFLAGS = -Wall -Wextra -Werror -I $(LIBFT_DIR) -I $(HEADER_DIR) -I ./ -g3

LFLAGS  = -L $(LIBFT_DIR) -lft -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz -o 

RM = rm -rf

# **********************************FILES************************************* #

LIBFT_NAME = libft.a

HEADER_NAME = so_long.h

SRCS_NAME =	initialisation.c	\


# ********************************DIRECTORIES********************************* #

LIBFT_DIR = ./libft/

MLX_DIR = ./mlx_linux/

HEADER_DIR = ./includes/

SRCS_DIR = ./srcs/			

OBJS_DIR = ./srcs/

# **********************************FUSION************************************ #

LIBFT = $(addprefix $(LIBFT_DIR), $(LIBFT_NAME))

HEADER = $(addprefix $(HEADER_DIR), $(HEADER_NAME))
		
SRCS = $(addprefix $(SRCS_DIR), $(SRCS_NAME))

OBJS = $(addprefix $(OBJS_DIR), $(SRCS_NAME:.c=.o))

# **********************************RULES************************************* #

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
		$(CC) -o $@ -c $< $(CFLAGS) -Imlx_linux

all: $(NAME)

$(LIBFT):
		$(MAKE) -C $(LIBFT_DIR)

$(NAME):$(LIBFT) $(OBJS_DIR) $(OBJS)
		make -C $(MLX_DIR)
		$(CC) -o $@ $(OBJS) $(CFLAGS) $(LFLAGS) $(NAME)

$(OBJS_DIR):	
		mkdir -p $@

bonus:

clean:
		$(MAKE) -C libft clean
		$(RM) $(OBJS) ./objs/

fclean: clean
		$(RM) $(NAME) $(LIBFT)

re: fclean all
