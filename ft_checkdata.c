

# include "push_swap.h"

int	ft_checkdata(char **str, t_stack	*stack_a)
{ // vamos a suponer que funciona
	int	i;
	int	j;
	int	error; // tomará valor -1 si algún valor no cumple requisitos
	
	i = 0;
	j = 0;
	error = 0;
	while (str[i] != '\0' && error == 0) // vamos recorriendo las filas de la matriz
	{
		while (str[j] != '\0')
		{			// pensar bien estas condiciones (mejor por inclusión o mejor por exclusión)
			if (is_digit(str[i][j]) || 
				((str[i][0] == '-' || str[i][0] == '+') && ft_strlen(str[i]) > 1 && isdigit(str[i][1]))
				)
				{
					
				}
			j++;
		}
		i++;
	}


	return (error);
}
