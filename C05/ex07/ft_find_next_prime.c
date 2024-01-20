/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:20:53 by adbouras          #+#    #+#             */
/*   Updated: 2023/11/01 12:09:29 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
{
	long int	i;

	if (nb <= 1)
	{
		return (0);
	}
	else if (nb == 2 || nb == 3)
	{
		return (1);
	}
	else if (nb % 2 == 0 || nb % 3 == 0)
	{
		return (0);
	}
	else if (nb > 3)
	{
		i = 3;
		while (i * i <= nb)
		{
			if (nb % i == 0)
				return (0);
			i = i + 2;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (is_prime(nb) == 0)
	{
		++nb;
	}
	return (nb);
}
