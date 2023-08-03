/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakcin <42kocaeli.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 03:28:25 by kakcin            #+#    #+#             */
/*   Updated: 2023/07/25 03:30:05 by kakcin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}
