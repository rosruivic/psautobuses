char *ft_isNumber(char *num)
{
	int len = count(num); // calculamos la longitud del "numero"
	int i;

	i = 0;

	if (len == 0) // no sé si hace falta
	{
		//return -1;
        return "longitud 0";
	}
	if (len == 1)
	{
		//return ft_isDigit(num[0]);
        if(ft_isDigit(num[0]) == -1)
        {
            return "long 1 y no es";
        }else{
            return "long 1 y si es";
        }
	}
	if (len >= 2)
	{
		if (num[0] == '+' || num[0] == '-')
		{
			i = 1;
			while(i < len)
			{
				if(ft_isDigit(num[i]) == -1)
				{
					//return -1;
                    return "is digit dice que no";
				}
				i++;
			}
			//return 0;
            return "si es un numero";
		}else{
			i = 0;
			while(i < len)
			{
				if(ft_isDigit(num[i]) == -1)
				{
					//return -1;
                    return "is digit dice que no";
				}
				i++;
			}
			//return 0;
            return "longitud mayir que 2 y si es ";
		}
	}
    return "longitud negativa ";
    //return -1; //la longitud del string es negativa, es imposible pero es para que la función siempre devuelva un int
}
int ft_isDigit(char num) //hija de isNumber
{
	if (num >= '0' && num <= '9')
	{
		return 0;
	}
	return -1;
}

int ft_uniqueNumbers (char **autobus, int *autobusInt, int len)
{
	int i;
	int *isRepe;
	
	isRepe = malloc(len * sizeof(int));
	if(!isRepe)
	{
		return -1;
	}
	isRepe[0] = autobusInt[0];
	i = 1;
	while(i < len)
	{
		if(ft_isInArray(isRepe, autobusInt[i], i) == -1)
		{
			return -1;
		}
		isRepe[i] = autobusInt[i];
		i++;
	}
	return 0;
}
