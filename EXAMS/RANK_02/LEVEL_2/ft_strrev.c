/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 22:24:17 by azaimi            #+#    #+#             */
/*   Updated: 2024/12/17 22:37:22 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strrev(char *str)
{
	int i;
	int j;
	char tmp;

	i = 0;
	while (str[i])
		i++;
	j = 0;
	while(j < i - 1)
	{
		tmp = str[j];
		str[j] = str[i - 1];
		str[i - 1] = tmp;
		i--;
		j++;
	}
	return (str);
}
