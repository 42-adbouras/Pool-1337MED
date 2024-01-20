/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:58:24 by adbouras          #+#    #+#             */
/*   Updated: 2023/10/30 09:33:32 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	index;
	int	sign;
	int	result;

	sign = 1;
	index = 0;
	result = 0;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
	{
		index++;
	}
	while (str[index] == '+' || (str[index] == '-'))
	{
		if (str[index] == '-')
		{
			sign *= (-1);
		}
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = (result * 10) + (str[index] - '0');
		index++;
	}
	return (result * sign);
}
