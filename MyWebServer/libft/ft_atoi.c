/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunan <seunan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:08:11 by seunan            #+#    #+#             */
/*   Updated: 2023/07/18 15:38:26 by seunan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long long	num;
	int			min;
	int			i;

	num = 0;
	min = 1;
	i = 0;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		++i;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			min *= -1;
		++i;
	}
	while (('0' <= str[i] && str[i] <= '9'))
	{
		num = num * 10 + str[i] - '0';
		++i;
	}
	return (min * num);
}
