# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: roruiz-v <roruiz-v@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/19 14:23:35 by roruiz-v          #+#    #+#              #
#    Updated: 2023/04/19 14:25:30 by roruiz-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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