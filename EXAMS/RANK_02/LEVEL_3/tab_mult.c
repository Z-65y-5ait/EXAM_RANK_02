/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 05:30:48 by azaimi            #+#    #+#             */
/*   Updated: 2024/12/18 05:41:55 by azaimi           ###   ########.fr       */
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

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int results;

	i = 0;
	sign = 1;
	results = 0;
	while((str[i] > 9 && str[i] < 14) || str[i] == 32)
		i++;
	while(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			sign *= -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		results = results * 10 + (str[i] - '0');
		i++;
	}
	return (results * sign);
}

int main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < 10)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(ft_atoi(argv[1]));
		write(1, " = ", 3);
		int res = i * ft_atoi(argv[1]);
		ft_putnbr(res);
		write(1, "\n", 1);
		i++;
	}
}