/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 07:55:51 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/16 10:53:45 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if (i <= j && j <= k)
		return (j);
	if (j <= k && k <= j)
		return (k);
	if (k <= i && i <= j)
		return (i);
	return (0);
}