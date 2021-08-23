#include <stdio.h>
#include <unistd.h>
/*
int main()
{
    char a[] = "hi";
    char* p = &a;
    char b = ''

    ft_strjoin(6, p,  );
}
*/

int		main(int argc, char *argv[])
{
	char	*str;
	int		i;
	char	sep[2];
 
	sep[0] = ' ';
	sep[1] = ',';
	i = 0;
	str = ft_strjoin(argc, argv, sep);
	write(1, str, ft_strlen(str));
}