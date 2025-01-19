/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 21:50:08 by azaimi            #+#    #+#             */
/*   Updated: 2024/12/18 21:59:31 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(const char *str, int str_base)
{
	int i;
	int sign;
	int results;

	i = 0;
	sign = 1;
	results = 0;
	while((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			sign *= -1;
		i++;
	}
	char *l = "0123456789abcdef";
    char *u = "0123456789ABCDEF";
	int j = 0;
    while (j < str_base)
    {
        if (str[i] != l[j] || str[i] != u[j])
            return (0);
        j++;
    }
	while(str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			results = results * str_base + (str[i] - '0');
		else if (str[i] >= 'a' && str[i] <= 'f')
			results = results * str_base + (str[i] - 'a' + 10);
		else if (str[i] >= 'A' && str[i] <= 'F')
			results = results * str_base + (str[i] - 'A' + 10);
		i++;
	}
	return (results * sign);
}
