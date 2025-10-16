/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumdogan <sumdogan@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 14:38:19 by sumdogan          #+#    #+#             */
/*   Updated: 2025/10/14 00:10:00 by sumdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	process;

	process = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		process = process * nb;
		nb--;
	}
	return (process);
}
