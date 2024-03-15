/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putontop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:59:54 by umosse            #+#    #+#             */
/*   Updated: 2024/03/08 15:25:30 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_topa(int nb, int *taba, int sizea)
{
	int	i;

	i = 0;
	if (getindex(nb, taba) < sizea / 2)
	{
		while (taba[0] != nb)
			ft_ra(taba, sizea);
	}
	else
	{
		while (taba[0] != nb)
			ft_rra(taba, sizea);
	}
}

void	ft_topb(int nb, int *tabb, int sizeb)
{
	int	i;

	i = 0;
	if (getindex(nb, tabb) < sizeb / 2)
	{
		while (tabb[0] != nb)
			ft_rb(tabb, sizeb);
	}
	else
	{
		while (tabb[0] != nb)
			ft_rrb(tabb, sizeb);
	}
}
