/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 02:14:34 by azaimi            #+#    #+#             */
/*   Updated: 2024/12/18 21:46:18 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int is_prime(int nbr)
{
    if (nbr < 2)
        return (0);
    int i = 2;
    while (i <= nbr / 2)
    {
        if (nbr % i == 0)
            return (0);
        i++;
    }
    return (1);
}


int main(int argc, char **argv)
{
	if (argc != 2 || ft_atoi(argv[1]) <= 0)
    {
        write(1, "0\n", 2);
        return (0);
    }
    int n = ft_atoi(argv[1]);
    int sum = 0;
    while (n > 1)
    {
        if (is_prime(n))
            sum += n;
        n--;
    }
    ft_putnbr(sum);
    ft_putchar('\n');
}