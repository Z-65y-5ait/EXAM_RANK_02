/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 21:34:36 by azaimi            #+#    #+#             */
/*   Updated: 2024/12/17 21:37:44 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int i;
	
	i = 0;
	while(str[i])
		i++;
	return (i);
}

char    *ft_strdup(char *src)
{
	int i;
	char *str;
	
	i = 0;
	str = malloc(ft_strlen(src) + 1);
	if (!str)
		return (NULL);
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}