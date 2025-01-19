/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:47:22 by azaimi            #+#    #+#             */
/*   Updated: 2024/12/16 16:53:51 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc == 2)
	{
		while (argv[1][i] == '\n' || argv[1][i] == '\t')
			i++;
		while (argv[1][i] != '\n' && argv[1][i] != '\t' && argv[1][i] != '\0')
		{
			write (1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	write(1, "\n", 1);
	return (0);
}
