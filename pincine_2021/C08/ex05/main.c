/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 19:27:47 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/15 19:01:57 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_stock_str
{
    int size;
    char *str;
    char *copy;
}              t_stock_str;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	char	next;

	while (*str)
	{
		next = *str;
		if (next == '\0')
		{
			break ;
		}
		ft_putchar(next);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

char				*ft_strcpy(char *str, int size)
{
	char	*ret;
	int		i;

	ret = NULL;
	ret = malloc(sizeof(char) * (size + 1));
	i = 0;
	while (str[i])
	{
		ret[i] = str[i];
		i += 1;
	}
	ret[i] = 0;
	return (ret);
}

int	ft_strlen(int i)
{
	int	length;

	length = 0;
	while (length < i)
	{
		length++;
	}
	return (length);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av) //6 Hello
{
    t_stock_str *buff;
    int     i;
	
	i = 0;
    buff = (t_stock_str *)((ac + 1) * sizeof(t_stock_str));
    if (!buff)
        return (NULL);
    while (i < ac)
    {
        buff[i].size = ft_strlen(ac);
        buff[i].copy = ft_strcpy(av[i], buff[i].size);
        buff[i].str =  av[i];
        i++;
    }
    buff[i].size = 0;
    buff[i].copy = 0;
    buff[i].str = 0;
    return (buff);
}

void ft_show_tab(struct s_stock_str *par)
{
    int i;

    i = 0;
    while (par[i].str != 0)
    {
        ft_putstr(par[i].str);
        ft_putchar('\n');
        ft_putnbr(par[i].size);
        ft_putchar('\n');
        ft_putstr(par[i].copy);
        ft_putchar('\n');
        i++;
    }
}

int main ()
{
	struct s_stock_str a = {"hello", "dima", "ololol"};

	int i = 3;
	while (i < 3)
	printf("%s", ft_strs_to_tab(3, a));
	return 0;
	
}


/int					main(void)
{
	char	*strs[4];
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	int		size;

	str1 = "Bonjour";
	str2 = "les";
	str3 = "chacaux";
	str4 = "!";
	size = 5;
	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	strs[3] = str4;
	ft_show_tab(ft_strs_to_tab(size, strs));
}
