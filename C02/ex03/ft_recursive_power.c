int	ft_recursive_power(int nb, int power)
{
	if (power < 0 || nb == 0)
		return (0);
	if (power == 0 || nb == 1)
		return (1);
	if (power >= 31)
		return (-1);
	return (nb * ft_recursive_power(nb, power - 1));
}