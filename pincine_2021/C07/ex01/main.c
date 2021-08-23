 


/*
int      main(void)
{
    int start = 2;
    int end = 8;
 
    int *arr = ft_range(start, end);
 
    int i = 0;
    while (i <= end - start)
    {
        printf("%d, ", arr[i]);
        i++;
    }
    printf("\n");
}
*/
 
#include <stdlib.h>
#include <stdio.h>
/*
int   *ft_range(int min, int max)
{
	int *str;
	int i;
	int len;


  if (min >= max)
  {
    return (NULL);
  }

	i = 0;
	len = max - min;
	str = (int *)malloc(sizeof(min) * len);
	while (i < len)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
*/

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
	int	*arr;
	int	length;

	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(*arr) * ft_strlen(min, max));
	length = 0;
	while (min < max)
	{
		arr[length] = min;
		min++;
		length++;
	}
	return (arr);
}

int   main(void)
{

    int* res;
    int i;

    res = ft_range(5, 10);

    for (i = 0; i < 5; i++)
        printf("%d,", res[i]);
    printf("\n");

    res = ft_range(-20, -15);
    for (i = 0; i < 5; i++)
         printf("%d,", res[i]);
    printf("\n");

    res = ft_range(-2147483648, -2147483646);
    for (i = 0; i < 1; i++)
	    printf("%d,", res[i]);
    printf("\n");

    res = ft_range(10, 5);
    printf("%x\n", (unsigned int)res);
}