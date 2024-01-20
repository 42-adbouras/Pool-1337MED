/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:07:39 by adbouras          #+#    #+#             */
/*   Updated: 2023/11/01 18:14:22 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power == 0)
	{
		return (1);
	}
	else if (power > 0)
	{
		result = 1;
		while (power > 0)
		{
			result = nb * result;
			power--;
		}
		return (result);
	}
	return (0);
}
