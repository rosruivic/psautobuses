/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roruiz-v <roruiz-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:54:48 by roruiz-v          #+#    #+#             */
/*   Updated: 2023/04/20 12:54:40 by roruiz-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
#	include <limits.h>
# include "libft.h" // averiguar cómo incluir la librería para el Makefile

typedef struct s_stack
{
  /* data */
	int							value;
	int							index;
	int							pos;
	int							target_pos;
	int							cost_a;
	int							cost_b;
	int							curr_elmts; // cantidad elmtos que hay actualmte en el stack
	int							total_elmts; // num total elmtos (= argc -1) pa'pasarlo easy
	int							total_cost; // a+b en valor absoluto (esto es de vagos)
	// s_stack	*next;  // si fueramos a usar listas enlazadas, no es el caso
}	t_stack;

/**
 * @brief This atoi is able to fill the variable "value" of a t_stack data
 * 
 * @param str 		"Numeros" para traducir de char a integer
 * @param stack_a "Mochila" de la estuctura del array de datos donde volcar
 * 								el valor calculado por la función
 * @return int 		Devuelve -1 si se pasa de los límites de un int;
 * 								devuelve 0 si todo ha ido bien.
 */
int ft_ps_atoi (char *str, t_stack *stack_a);







#endif
