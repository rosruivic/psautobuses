int count(char *string)
{
    int i = 0;
    while(*string)
    {
        i++;
        string++;
    }
    return i;
}

int ft_ps_atoi(char *str, int error)
{
	int i;    // índice para movernos por el array
	int nb;
	int sign;
	int dig;

	i = 0;
	nb = 0;
	sign = 1;
	dig = 0;
    error = 0;

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
			error = -1;
            return (-1); // se pasará del lim, retornamos código error para abortar
		nb = nb * 10 + dig;
	}
//	stack_a->value = nb * sign; // cada vez es una pos del array stack_a
	return nb;
}

void ft_freedom(char **array)
{
    //TODO
}
int ft_parseInt(char **autobus, int *autobusInt, int len)
{
    int i;
    int error;

	autobusInt = malloc(len * sizeof(int));
    if(!autobusInt)
    {
        return -1;
    }
	i = 0; 
	while(i < len)
	{
		autobusInt[i] = ft_ps_atoi(autobus[i], &error);
        if(error == -1)
        {
            free(autobusInt);
            //liberamos autobus
            return -1;
        }
		i++;
	}
    return 0;
	//free(autobus);
}
int ft_isInArray(int *isRepe, int number, int len)
{
    int i = 0;

    while(i < len)
    {
        if(isRepe[i] == number)
        {
            return -1;
        }
        i++;
    }
    return 0;
}