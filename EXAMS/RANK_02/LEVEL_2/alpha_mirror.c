/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 02:16:37 by azaimi            #+#    #+#             */
/*   Updated: 2024/12/17 02:32:10 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if ((argv[1][i] >= 65 && argv[1][i] <= 90))
			{
				argv[1][i] = 90 - argv[1][i] + 65;
				write(1, &argv[1][i], 1);
			}
			else if ((argv[1][i] >= 97 && argv[1][i] <= 122))
			{
				argv[1][i] = 97 - argv[1][i] + 122;
				write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}