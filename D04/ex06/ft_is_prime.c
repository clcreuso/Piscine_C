/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 09:16:10 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/12 09:17:20 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int a;

	a = 2;
	if (nb < 2)
		return (0);
	while (a < 100)
		if (nb % a == 0 && a != nb)
			return (0);
		else
			a++;
	a = 2;
	while (a < (nb / 99) && a != nb)
		if (nb % a == 0 && a != nb)
			return (0);
		else
			a++;
	return (1);
}
