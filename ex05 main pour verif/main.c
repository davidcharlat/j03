#include <stdio.h>

int	main (void)
{
	char *str;
	int cursor;
	int counter;

	str = "totori";
	counter = 0;
	cursor = 0;
	
	while (*(str + cursor) != '\0')
	{
		counter++;
		cursor++;
	}
	printf ("%d", counter);
	return (counter);
}
