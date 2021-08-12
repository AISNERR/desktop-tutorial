/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 09:46:43 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/12 12:28:33 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *arr;
    int length;
    
    if (min >= max)
        return (NULL);
    arr = (int*)malloc(sizeof(*arr) * (max - min));
    length = 0;
    while (min < max)
    {
        arr[length] = min;
        min++;
        length++;
    }
    return (arr);
}
