

#include <stdio.h>

/*
int ft_ultimate_range(int **range, int min, int max)
{
    int *arr;
    int length;
    
    if (min >= max)
        range = (void *)0;
        return (0);
    arr = (int*)malloc(sizeof(*arr) * (max - min));
    length = 0;
    while (min < max)
    {
        arr[length] = min;
        min++;
        length++;
    }
    *range = arr;
    return (length);
}
*/

int	ft_strlen(int min, int max);
int	*ft_range(int min, int max);


#include <stdlib.h>

int	ft_strlen(int min, int max)
{
	int	length;

	length = 0;
	while (min <= max)
	{
		length++;
		min++;
	}
	return (length);
}

int	*ft_range(int min, int max)
{
	int	*KO;
	int	i;

	if (min >= max)
		return (0);
	KO = malloc(ft_strlen(min, max) * sizeof(int));
	if (KO == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		KO[i] = min;
		i++;
		min++;
	}
	return (KO);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (-1);
	return (ft_strlen(min, max));
}

int  main(void)
{
    int  *range;
    int  i;
    
    i = 0;
    printf("%d\n", ft_strlen(-5, 50));
    printf("return : %d\n", ft_ultimate_range(&range, -5, 50));
    while (i < 55)
    {
        printf("%d\n", range[i]);
        i++;
    }
    return (0);
}


