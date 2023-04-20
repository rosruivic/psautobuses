/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nursanch <nursanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:35:50 by roruiz-v          #+#    #+#             */
/*   Updated: 2023/04/20 19:59:44 by nursanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//# include <stdlib.h> // vale para el malloc
# include <unistd.h> // vale para el malloc

// typedef struct s_stack
// {
//   /* data */
// 	int							value;
// 	int							index;
// 	int							pos;
// 	int							target_pos;
// 	int							cost_a;
// 	int							cost_b;
// 	int							curr_elmts; // cantidad elmtos que hay actualmte en el stack
// 	int							total_elmts; // num total elmtos (=a rgc -1) para pasarlo easy
// 	int							total_cost; // a+b en valor absoluto (esto es de vagos)
// 	s_stack	*next;  
// }	t_stack;

int main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char		**autobus;
	int			i;
	int			error;

	i = 0;
	error = 0;

	/*
	*		RESERVA DE LAS PILAS:
	*		- Si vienen en autobús (entre comillas), SPLIT informa de la dimensión;
	*		- Si vienen en vehículos particulares, dimension = argc - 1;
	*/
	stack_a = NULL;
	stack_b = NULL;
	autobus = NULL;

  if (argc == 1) // no hay argumentos; roja directa
		return (write(1, "ERROR", 5), 0);
	if (argc == 2) // CASO DEL AUTOBÚS
	{
		autobus = ft_split(argv, stack_a); // devuelve puntero a un puntero
		error = ft_checkdata(xxx); // si data error, return ("error"; 0);
		// ft_ps_atoi;
	}
	else // argc > 2 ****** (CASO DE LOS VEHÍCULOS PARTICULARES) *******
	{
		error = ft_bookstack(stack_a, stack_b, argc -1);
		if (error = -1)
			return(0);
		while (i < argc && error == 0)
		{
			error = ft_checkdata(argv[i + 1]); // si data error, return ("error"; 0);

			// error = ft_ps_atoi(argv[i + 1], stack_a[i]);
			i++;
		}
		if (error == -1) // algún atoi ha dado por fuera de los límites de un int
			return(free(stack_a), free(stack_b), write(1, "ERROR", 5), 0);
	}
	/*
		****************  ALGORITMOS DE ORDENACIÓN  *****************
	*/
	// ft_ordering(stack_a, stack_b);
	
	return (free(stack_a), free(stack_b), 0);
}

//nuria