

NAME	=	push_swap.a  

HDRS = push_swap.h

SRC		=	ft_ps_atoi.c

			

OBJS = $(SRC:.c=.o)


FLAGS	= -Wall -Werror -Wextra

.c.o:
	gcc -c $(FLAGS) $< -o $(<:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS) $(HDRS)
	ar -crs $(NAME) $(OBJS)
		
clean:
	rm -f $(OBJS) $(OBJSB)

fclean: clean
	rm -f $(NAME)

re:	fclean all

# bonus: $(OBJS) $(OBJSB) $(HDRS)
# 	ar -cr $(NAME) $(OBJS) $(OBJSB)
# 	ranlib $(NAME)

.PHONY: all clean fclean re bonus

# ar -s crea la indexación
# hace lo mismo que ranlib $(NAME), por ejemplo