/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   under3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:03:17 by umosse            #+#    #+#             */
/*   Updated: 2024/03/14 15:34:37 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_size3(int *taba)
{
	if (taba[0] > taba[1])
	{
		if (taba[1] > taba[2])
		{
			ft_sa(taba);
			ft_rra(taba, 3);
		}
		else if (taba[1] < taba[2])
		{
			if (taba[0] > taba[2])
				ft_ra(taba, 3);
			else if (taba[0] < taba[2])
				ft_sa(taba);
		}
	}
	if (taba[0] < taba[1])
	{
		if (taba[0] > taba[2])
			ft_rra(taba, 3);
		else if (taba[1] > taba[2])
		{
			ft_sa(taba);
			ft_ra(taba, 3);
		}
	}
}

void	ft_size2(int *taba)
{
	if (taba[0] > taba[1])
		ft_sa(taba);
}
