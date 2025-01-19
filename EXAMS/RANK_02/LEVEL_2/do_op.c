/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 02:49:26 by azaimi            #+#    #+#             */
/*   Updated: 2024/12/17 03:25:10 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int nbr1;
	int nbr2;

	if (argc == 4)
	{
		if(argv[2][0] == '+')
		{
			nbr1 = atoi(argv[1]);
			nbr2 = atoi(argv[3]);
			printf("%d", nbr1 + nbr2);
		}
		if(argv[2][0] == '-')
		{
			nbr1 = atoi(argv[1]);
			nbr2 = atoi(argv[3]);
			printf("%d", nbr1 - nbr2);
		}
		if(argv[2][0] == '*')
		{
			nbr1 = atoi(argv[1]);
			nbr2 = atoi(argv[3]);
			printf("%d", nbr1 * nbr2);
		}
		if(argv[2][0] == '/')
		{
			nbr1 = atoi(argv[1]);
			nbr2 = atoi(argv[3]);
			if (nbr2 != 0)
			{
				printf("%d", nbr1 / nbr2);
			}
			else
				printf("invalid 2th number");
		}
		if(argv[2][0] == '%')
		{
			nbr1 = atoi(argv[1]);
			nbr2 = atoi(argv[3]);
			if (nbr2 != 0)
			{
				printf("%d", nbr1 % nbr2);
			}
			else
				printf("invalid 2th number");
		}
	}
}