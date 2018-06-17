int	ft_atoi(char *str)

{
	int	nbr;
	int	strlenght;
	int	counter;
	int	ten_to_the_nth;
	int	sign;	
	
	sign = 1;
	counter = 0;
	ten_to_the_nth = 1;
	nbr = 0;
	strlenght = 0;	
	while (*(str + strlenght) != '\0')
		strlenght++;
	while ((counter < strlenght) && (sign == 1))
	{
		if (*(str + strlenght - 1 - counter) != '-')
		{	
			nbr = nbr + (*(str + strlenght - 1 - counter)-48)*ten_to_the_nth;
			ten_to_the_nth *= 10;
			counter++;
		}
		else
		   	sign = -1;
	}
	return(nbr*sign);
}
