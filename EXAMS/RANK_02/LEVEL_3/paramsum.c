/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 22:22:32 by azaimi            #+#    #+#             */
/*   Updated: 2024/12/18 22:27:13 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
	if(nbr == -2147483647)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		write(1, "147483647", 1);
	}
	else if(nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
		ft_putnbr(nbr);
	}
	else if(nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

int main(int ac, char **argv)
{
	ft_putnbr(ac - 1);
	write(1, "\n", 1);
	return (0);
}