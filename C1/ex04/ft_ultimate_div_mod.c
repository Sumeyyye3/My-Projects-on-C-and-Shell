/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumdogan <sumdogan@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 10:24:49 by sumdogan          #+#    #+#             */
/*   Updated: 2025/10/03 21:16:32 by sumdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	int_a;
	int	int_b;

	if (b != 0)
	{
		int_a = *a;
		int_b = *b;
		*a = int_a / int_b;
		*b = int_a % int_b;
	}
}
