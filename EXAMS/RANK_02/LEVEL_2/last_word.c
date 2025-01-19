/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 01:19:37 by azaimi            #+#    #+#             */
/*   Updated: 2024/12/18 02:02:09 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(const char *str)
{
	int i;
	
	i = 0;
	while(str[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	int	i;
	int len2;
	
	if (argc == 2)
	{
		int len1 = ft_strlen(argv[1]) - 1;
		while(len1 >= 0 && (argv[1][len1] == ' ' || argv[1][len1] == '\t'))
			len1--;
		len2 = len1;
		while(len2 >= 0 && (argv[1][len2] != ' ' && argv[1][len2] != '\t'))
			len2--;
		len2++;
		while(len1 >= len2)
		{
			write(1, &argv[1][len2], 1);
			len2++;
		}
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
	}
	
}