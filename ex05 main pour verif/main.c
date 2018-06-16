#include <stdio.h>

int	main (void)
{
	char toto;
	char *str;
	int cursor;
	int counter;

	str = "toto";
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
