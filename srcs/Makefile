# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 14:40:20 by abonte-l          #+#    #+#              #
#    Updated: 2024/05/30 13:09:57 by abonte-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

RM		=	rm -f

CC			=	cc
CC_FLAGS	=	-Wall -Wextra -Werror

SRCS		=	ft_isalnum.c	ft_isalpha.c	ft_isascii.c	ft_isdigit.c \
				ft_isprint.c	ft_tolower.c	ft_atoi.c		ft_toupper.c \
				ft_strlen.c		ft_bzero.c		ft_strdup.c		ft_strncmp.c \
				ft_strlcpy.c	ft_strlcat.c	ft_strjoin.c	ft_memcpy.c \
				ft_putstr_fd.c	ft_calloc.c		ft_memmove.c	ft_memchr.c \
				ft_memcmp.c		ft_strrchr.c	ft_strchr.c		ft_memset.c \
				ft_strtrim.c	ft_split.c		ft_strmapi.c	ft_substr.c \
				ft_strnstr.c	ft_striteri.c	ft_putendl_fd.c ft_itoa.c \
				ft_putnbr_fd.c	ft_putchar_fd.c

SRCS_BONUS	=	ft_lstnew.c			ft_lstadd_front.c	ft_lstsize.c \
				ft_lstlast.c		ft_lstadd_back.c	ft_lstdelone.c \
				ft_lstclear.c		ft_lstiter.c		ft_lstmap.c

OBJ			=	$(SRCS:.c=.o)

OBJ_BONUS	=	${SRCS_BONUS:.c=.o}

BONUS 		= bonus

all: $(NAME)

.c.o: $(SRCS) $(SRCS_BONUS)
	gcc -Wall -Wextra -Werror -c $^ -o ${^:.c=.o} 

$(NAME):	$(OBJ) libft.h
	ar rcs $(NAME) $(OBJ)

bonus:	$(NAME) ${OBJ_BONUS}
	ar rcs $(NAME) ${OBJ_BONUS}

clean:
	$(RM) ${OBJ} ${OBJ_BONUS}

fclean: 	clean
	$(RM) $(NAME) 

re:			fclean all

.PHONY:  clean fclean all re bonus
