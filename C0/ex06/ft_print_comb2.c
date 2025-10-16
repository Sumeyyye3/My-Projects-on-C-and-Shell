/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumdogan <sumdogan@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 20:01:00 by sumdogan          #+#    #+#             */
/*   Updated: 2025/09/30 20:01:08 by sumdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_write(char result)
{
	write (1, &result, 1);
}

void	ft_print_comb2(void)
{
	int	pair_one;
	int	pair_two;

	pair_one = 0;
	while (pair_one <= 98)
	{
		pair_two = pair_one + 1;
		while (pair_two <= 99)
		{
			ft_write (pair_one / 10 + '0');
			ft_write (pair_one % 10 + '0');
			write (1, " ", 1);
			ft_write (pair_two / 10 + '0');
			ft_write (pair_two % 10 + '0');
			if (!(pair_one == 98))
				write (1, ", ", 2);
			pair_two++;
		}
		pair_one++;
	}
}
