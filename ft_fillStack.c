
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
// }	t_stack;

void ft_ordin (stack_a);

void ft_fillStack(int *autobus, t_stack *stack_a)
{
	/*por cada valor de autobus
		- valor (con atoi)
		- index orden en el que tiene que salir, funcion a parte
		- posición actual en el stack, posición del while
		- curr_elmts contar elementos autobus
		- total_elmts igual que el de arriba
	*/
	int i;
	int totalLength;
	i = 0;

	totalLength = count(autobus); //cuantos elementos tiene autobús
	while(i < totalLength){
		
		stack_a[i]->value = ft_atoi(autobus[i]);
		stack_a[i]->position = i; //mirar  si se empieza en 0 o en 1
		stack_a[i]->curr_elmts = totalLength;
		stack_a[i]->total_elmts = totalLength;
		i++;	
	}
	ft_ordin(stack_a);
} 

void ft_ordin (t_stack stack_a) //poner en radix
{
	//rellenar el campo index
	int min;
	int i;
	int j;
	int len = stack_a[0]->total_elmts;
	t_stack temp;
	i = 0;
	while(i < len)
	{
		min = stack_a[i]->value; 
		j = i+1;
		while(j < len){
			if(stack_a[j]->value < min)
			{
				min = stack_a[j]->value;
				stack_a[j]->index = i;

				temp = stack_a[i];
				stack_a[i] = stack_a[j];
				stack_a[j] = temp;
			}
			j++;
		}
		i++;
	}
	stack_a[len -1]->index = len -1;
}
