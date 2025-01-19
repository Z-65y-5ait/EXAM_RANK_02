/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 22:00:25 by azaimi            #+#    #+#             */
/*   Updated: 2024/12/18 22:03:30 by azaimi           ###   ########.fr       */
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
    while (i < size)
    {
		if (end < start)
        	str[i] = end++;
		else
			str[i] = end--;
        i++;
    }
    return (str);
}