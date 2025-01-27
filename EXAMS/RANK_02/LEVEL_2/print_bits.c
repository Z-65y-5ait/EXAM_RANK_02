/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 23:07:48 by azaimi            #+#    #+#             */
/*   Updated: 2024/12/17 23:15:05 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_bits(unsigned char octet)
{
	int i; 
   for (i = 7; i >= 0; i--)
   {
        if (octet & (1 << i))
            write (1, "1", 1);
        else
            write (1, "0", 1);
   }
}
