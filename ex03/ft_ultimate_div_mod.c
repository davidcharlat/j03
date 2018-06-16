void	ft_ultimate_div_mod (int *a, int *b)
{
	int a_mem;

	a_mem = *a;
	*a = *a / *b;
	*b = a_mem % *b;
}
