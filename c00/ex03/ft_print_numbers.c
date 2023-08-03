/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakcin <42kocaeli.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 20:11:23 by kakcin            #+#    #+#             */
/*   Updated: 2023/07/15 23:09:39 by kakcin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	s;

	s = 48;
	while (s >= 48 && s <= 57)
	{
		write(1, &s, 1);
		s++;
	}
}
