/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:30:20 by adbouras          #+#    #+#             */
/*   Updated: 2023/10/25 14:22:16 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	len;

	index = 0;
	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[index] != '\0')
	{
		dest[len] = src[index];
		len++;
		index++;
	}
	dest[len] = '\0';
	return (dest);
}
