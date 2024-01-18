/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:32:39 by adbouras          #+#    #+#             */
/*   Updated: 2023/10/28 15:49:00 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print((i / 10) + '0');
			ft_print((i % 10) + '0');
			write (1, " ", 1);
			ft_print((j / 10) + '0');
			ft_print((j % 10) + '0');
			if (i != 98 || j != 99)
			{
				write (1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
