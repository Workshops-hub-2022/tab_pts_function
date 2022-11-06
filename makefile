##
## EPITECH PROJECT, 2022
## pts-function
## File description:
## main
##

NAME	=	pts_function

FOLDER	=	src/

SRCS	=	$(FOLDER)main.c \
			$(FOLDER)math.c \
			$(FOLDER)tab_pts_func.c \

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Werror -Wall -Wextra -W -Iinclude

CC		=	gcc

RM     =	rm -f

all    :	$(NAME)

$(NAME):	$(OBJS)
			$(CC) -o $(NAME) $(OBJS) -lm

clean  :	
		$(RM) $(NAME)

fclean :	clean
			$(RM) $(OBJS)
			rm -f *~

re     :	fclean all

.PHONY :	all clean fclean re