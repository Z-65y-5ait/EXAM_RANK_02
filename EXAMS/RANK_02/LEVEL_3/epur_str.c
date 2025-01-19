/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 20:38:32 by azaimi            #+#    #+#             */
/*   Updated: 2024/12/18 21:06:47 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while(str[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	if (argc == 2 || ft_strlen(argv[1]) > 0)
	{
		int i = 0;
		int s = 0;
		while (argv[1][i] == 32)
			i++;
		while (argv[1][i])
		{
			if(argv[1][i] == 32)
				s = 1;
			if(argv[1][i] != 32)
			{
				if (s == 1)
					write(1, " ", 1);
				s = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}