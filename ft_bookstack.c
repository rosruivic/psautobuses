/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bookstack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nursanch <nursanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:57:45 by roruiz-v          #+#    #+#             */
/*   Updated: 2023/04/20 19:53:58 by nursanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

/**
 * @brief Reservar las dos pilas del tamaño "dimension"
 * 
 * @param stack_a 
 * @param stack_b 
 * @param dimension Determina el tamaño de la reserva.
 * @return int 			Devuelve -1 en caso de error en la reserva
 */
int	ft_bookstack(t_stack stack_a, t_stack stack_b, int dimension)
{
	stack_a = malloc ((dimension) * sizeof(stack_a));
	if (!stack_a)
		return (-1);
	stack_b = malloc ((dimension) * sizeof(stack_b));
	if (!stack_b)
		return(free(stack_a), -1);		
	return(0);
}
