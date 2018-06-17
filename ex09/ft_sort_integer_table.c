void	ft_sort_integer_table(int *tab, int size)

{
	int counter;
	int counterb;
	int memory;

	counter = 0;
	
	while (counter < size)
	{
		counterb = counter;
		while (counterb < size)
		{
			if (*(tab + counter) > *(tab + counterb))
			{
				memory = *(tab + counter);
				*(tab + counter) = *(tab + counterb);
				*(tab + counterb) = memory;
			}
		counterb++;
		}
	counter++;
	}	
}
