
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *s1)
{
	char	*dst;

	dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (dst)
	{
		ft_strcpy(dst, s1);
		return (dst);
	}
	else
		return (0);
}

int        main(void)
{
    char src[] = "hello";
 
    //a = ft_strdup(src);
    
    printf("%s\n", ft_strdup(src));
}