char	*ft_strrev(char *str)

{
	int		counter;
	int		strlenght;	 
	char	copy_each_letter;
	
	counter = 0;
	strlenght = 0;	
	while (*(str + strlenght) != '\0')
		strlenght++;

	while (counter < strlenght)
	{
		copy_each_letter = *(str + counter);
		*(str + counter) = *(str + strlenght - 1 - counter);
		*(str + strlenght - 1 - counter) = copy_each_letter;
		counter++;
	}

	return (str);
}
