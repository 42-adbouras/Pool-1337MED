/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:05:44 by adbouras          #+#    #+#             */
/*   Updated: 2023/10/19 10:35:47 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	pos;

	pos = 0;
	while (pos < (size / 2))
	{
		swap = tab[pos];
		tab[pos] = tab[size - 1 - pos];
		tab[size - 1 - pos] = swap;
		pos++;
	}
}
