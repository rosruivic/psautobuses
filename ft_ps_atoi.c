/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roruiz-v <roruiz-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:45:59 by roruiz-v          #+#    #+#             */
/*   Updated: 2023/04/19 16:24:03 by roruiz-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

/* partimos de la base de que previamente se ha comprobado validez datos */
int ft_ps_atoi(char *str/*, t_stack *stack_a*/)
{
	int i;    // índice para movernos por el array
	int nb;
	int sign;
	int dig;

	i = 0;
	nb = 0;
	sign = 1;
	dig = 0;

	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		dig = str[i++] - '0'; // distancia entre el alfa y el num
		// se comprueba si se pasa del límite antes de que se llegue a pasar:
		if (nb > INT_MAX / 10 || (dig == INT_MAX / 10 && dig > INT_MAX % 10))
			return (-1); // se pasará del lim, retornamos código error para abortar
		nb = nb * 10 + dig;
	}
//	stack_a->value = nb * sign; // cada vez es una pos del array stack_a
	return (0);
}
