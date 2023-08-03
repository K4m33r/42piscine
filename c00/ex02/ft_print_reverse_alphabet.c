/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakcin <42kocaeli.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 20:00:57 by kakcin            #+#    #+#             */
/*   Updated: 2023/07/16 02:24:43 by kakcin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	count;

	count = 123;
	while (count-- >= 98)
		write(1, &count, 1);
}

int main(void)
{
	ft_print_reverse_alphabet();
}
