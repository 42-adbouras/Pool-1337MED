/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:06:02 by adbouras          #+#    #+#             */
/*   Updated: 2023/10/30 19:09:14 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	x;
	int	y;

	x = 1;
	y = 0;
	while (x < ac)
	{
		while (av[x][y] != '\0')
		{
			write (1, &av[x][y], 1);
			y++;
		}
		y = 0;
		write (1, "\n", 1);
		x++;
	}
	return (0);
}
