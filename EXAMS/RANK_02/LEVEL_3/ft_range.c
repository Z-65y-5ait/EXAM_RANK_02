/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 05:48:59 by azaimi            #+#    #+#             */
/*   Updated: 2024/12/18 06:03:59 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int i = 0;
    int size;
    int *str;

    if (start <= end)
        size = end - start + 1;
    else
        size = start - end + 1;
    str = (int *)malloc(size * sizeof(int));
    if (!str)
        return (NULL);
    if (start <= end)
    {
        while (i < size)
        {
            str[i] = start + i;
            i++;
        }
    }
    else
    {
        while (i < size)
        {
            str[i] = start - i;
            i++;
        }
    }
    return (str);
}
