/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 09:46:48 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/12 15:58:05 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *KO;
    int i;
    
    if (min >= max)
        return (0);
    KO = malloc((max - min) * sizeof(*KO));
    if (KO == NULL)
        return (NULL);
    i = 0;
    while (i < max)
    {
        KO[i]= min + i;
        i++;
    }
    return (KO);
}

int ft_ultimate_range(int **range, int min, int max)
{
    *range = ft_range(min, max);
    if (*range == NULL)
        return (-1);
    return (max - min);
}
