/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumdogan <sumdogan@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:02:09 by sumdogan          #+#    #+#             */
/*   Updated: 2025/10/14 17:43:39 by sumdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if ((power == 0) && (nb != 0))
	{
		return (1);
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else if ((power -1) > 0)
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
	return (nb);
}
