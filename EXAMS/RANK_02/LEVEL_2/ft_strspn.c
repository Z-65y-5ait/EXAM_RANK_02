/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 21:07:54 by azaimi            #+#    #+#             */
/*   Updated: 2024/12/17 21:34:16 by azaimi           ###   ########.fr       */
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

size_t	ft_strspn(const char *s, const char *accept)
{
	int i;
	int j;
	int c;
	
	i = 0;
	while (s[i])
	{
		j = 0;
		c = 0;
		while(accept[j])
		{
			if (s[i] == accept[j])
				c = 1;
			j++;
		}
		if (c == 0)
			return (i);
		i++;
	}
	return (ft_strlen(s));
}
