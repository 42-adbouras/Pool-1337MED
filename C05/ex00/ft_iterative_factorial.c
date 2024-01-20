/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:37:09 by adbouras          #+#    #+#             */
/*   Updated: 2023/11/01 09:22:35 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = nb - 1;
	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	else if (nb > 1)
	{
		while (fact > 1)
		{
			nb = nb * fact;
			fact--;
		}
	}
	return (nb);
}
