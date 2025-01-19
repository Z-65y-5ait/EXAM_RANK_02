/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 05:16:59 by azaimi            #+#    #+#             */
/*   Updated: 2024/12/18 05:26:55 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	int	j;
	int c[256] = {0};

	i = 0;
	if (argc == 3)
	{
		while(argv[1][i])
        	c[(int)argv[1][i++]] = 1;
        i = 0;
        while(argv[2][i])
        	c[(int)argv[2][i++]] = 1;
        i = 0;
        while (argv[1][i])
        {
            if (c[(int)argv[1][i]])
            {
                write(1, &argv[1][i], 1);
                c[(int)argv[1][i]] = 0;
            }
            i++;
        }
        i = 0;
        while (argv[2][i])
        {
            if (c[(int)argv[2][i]])
            {
                write(1, &argv[2][i], 1);
                c[(int)argv[2][i]] = 0;
            }
            i++;
        }
		write(1, "\n", 1);
	}
	write(1, "\n", 1);
}