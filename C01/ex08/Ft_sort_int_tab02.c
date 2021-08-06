#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
    int swap;
    int count;

    count = 0;
    while (count < (size -1))
    {
        if (tab[count] > tab[count + 1])
        {
            swap = tab[count];
            tab[count] = tab[count + 1];
            tab[count + 1] = swap;
            count = 0;;
        }
        else
            count++;
    }
}

int main()
{
    int tab[7] = {3, 4 ,5, -10 ,3456, 0, 67};
    int size = 7;

    ft_sort_int_tab(tab, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", tab[i]);
    }
}