/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 06:05:11 by azaimi            #+#    #+#             */
/*   Updated: 2024/12/18 06:13:11 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int results;

	i = 0;
	sign = 1;
	results = 0;
	while((str[i] >= 9 && str[i] < 14) || str[i] == 32)
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

void	print_hex(unsigned int nbr)
{
	char *base = "0123456789abcdef";
	
	if(nbr >= 16)
		print_hex(nbr / 16);
	ft_putchar(base[nbr % 16]);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		print_hex(ft_atoi(argv[1]));
		ft_putchar('\n');
	}
}