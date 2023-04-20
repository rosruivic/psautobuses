

// # include <stdlib.h> // vale para el malloc
#include <unistd.h> // vale para el malloc

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
	t_stack *stack_a;
	t_stack *stack_b;
	char **autobus;
	int i;

	i = 0;

	stack_a = NULL;
	stack_b = NULL;
	autobus = NULL;
	if (argc == 1) 
		return (write(1, "ERROR", 5), 0);
	if (argc == 2)
		autobus = ft_split(argv[1]);
	else
	{
		autobus = argv; //TODO poner un bucle que guarde los valores

	} 

	if (ft_checkdata(autobus) == -1)
		return (free(autobus), write(1, "ERROR", 5), 0);

	if (ft_bookstack(stack_a, stack_b, argc - 1) == -1)
	{
		return (write(1, "ERROR", 5), 0);
	}

	// ahora tenemos los stacks ya creados bien y con los datos bien
	ft_fillStack(autobus, stack_a); // esta funcion rellena los datos del stack a con los ya parseados(tipo de dato cambiado) ints,
	// llamamos a atoi

	
}
