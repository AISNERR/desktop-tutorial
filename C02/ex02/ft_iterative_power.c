int	ft_iterative_power(int nb, int power)
{
	int response;

	if (power < 0 || nb == 0)
		return (0);
	if (power == 0 || nb == 1)
		return (1);
	response = 1;
	while (power > 0)
	{
		response = response * nb;
		power--;
	}
	return (response);
}