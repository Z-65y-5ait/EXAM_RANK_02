/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 22:36:58 by azaimi            #+#    #+#             */
/*   Updated: 2024/12/18 23:02:12 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc == 1)
		write(1, "\n", 1);
	else
	{
		int j = 1;
		while (j < argc)
		{
			int i = 0;
			while(argv[j][i])
			{
				if(argv[j][i] >= 'A' && argv[j][i] <= 'Z')
					argv[j][i] += 32;
				if((argv[j][i] >= 'a' && argv[j][i] <= 'z') && (argv[j][i - 1] == 32 || argv[j][i - 1] == '\t')
					|| (argv[j][0] >= 'a' && argv[j][0] <= 'z'))
				{
					argv[j][i] -= 32;
					write(1, &argv[j][i], 1);
				}
				else
					write(1, &argv[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
		write(1, "\n", 1);	
	}
}