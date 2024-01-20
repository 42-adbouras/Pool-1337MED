/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:40:08 by adbouras          #+#    #+#             */
/*   Updated: 2023/11/02 10:22:12 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	ndx;

	(void) ac;
	(void) av;
	ndx = 0;
	while (av[0][ndx] != '\0')
	{
		write (1, &av[0][ndx], 1);
		ndx++;
	}
	write (1, "\n", 1);
	return (0);
}
