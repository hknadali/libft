# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hadali <hadali@42istanbul.com.tr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/06 01:32:38 by hadali            #+#    #+#              #
#    Updated: 2022/01/08 13:08:06 by hadali           ###   ########.tr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = @gcc

CFLAG =  -Wall -Werror -Wextra -c

RM = @rm -f

AR = @ar rc

SRCS =                  \
    ./ft_atoi.c         \
    ./ft_itoa.c         \
    ./ft_bzero.c        \
    ./ft_calloc.c       \
    ./ft_isalnum.c      \
    ./ft_isalpha.c      \
    ./ft_isascii.c      \
    ./ft_isdigit.c      \
    ./ft_isprint.c      \
    ./ft_memchr.c       \
    ./ft_memcmp.c       \
    ./ft_memcpy.c       \
    ./ft_memmove.c      \
    ./ft_memset.c       \
    ./ft_putchar_fd.c   \
    ./ft_putendl_fd.c   \
    ./ft_putnbr_fd.c    \
    ./ft_putstr_fd.c    \
	./ft_split.c		\
	./ft_strmapi.c		\
	./ft_strchr.c       \
    ./ft_strdup.c       \
    ./ft_strjoin.c      \
    ./ft_strlcat.c      \
    ./ft_strlcpy.c      \
    ./ft_strlen.c       \
	./ft_strncmp.c		\
    ./ft_strnstr.c      \
    ./ft_strrchr.c      \
    ./ft_strtrim.c      \
    ./ft_striteri.c     \
    ./ft_substr.c       \
    ./ft_tolower.c      \
    ./ft_toupper.c          

BONUS =               \
    ./ft_lstadd_back.c    \
    ./ft_lstadd_front.c   \
    ./ft_lstclear.c       \
    ./ft_lstdelone.c      \
    ./ft_lstiter.c        \
    ./ft_lstlast.c        \
    ./ft_lstnew.c     \
	./ft_lstmap.c		\
    ./ft_lstsize.c        

OBJS = $(subst .c,.o,$(SRCS))

BONUSOBJ = $(subst .c,.o,$(BONUS))

all : $(NAME)

$(NAME) :  $(OBJS)
	$(CC) $(CFLAG) $(SRCS)
	$(AR) $(NAME) $(OBJS)
	@echo "[LIBFT.A CREATED!]"

clean : 
	$(RM) $(OBJS) $(BONUSOBJ)
	@echo "[OBJECTS DELETED!]"

fclean : clean
	$(RM) $(NAME)
	@echo "[LIBFT.A DELETED!]"

bonus : $(BONUSOBJ)

$(BONUSOBJ) : $(BONUS)
	$(CC) $(CFLAG) $(BONUS)
	$(AR) $(NAME) $(BONUSOBJ)
	@echo "[BONUS CREATED!]"
    
re : fclean all
rebonus : fclean bonus
