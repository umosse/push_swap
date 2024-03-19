/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putontop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:59:54 by umosse            #+#    #+#             */
/*   Updated: 2024/03/18 15:00:18 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_topa(int nb, int *taba, int sizea)
{
	int	i;

	i = 0;
	if (getindex(nb, taba, sizea) < sizea / 2)
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
	if (getindex(nb, tabb, sizeb) < sizeb / 2)
	{
		while (tabb[0] != nb)
			ft_rb(tabb, sizeb);
	}
	else
	{
		while (tabb[0] != nb)
		{
			ft_rrb(tabb, sizeb);
			printf("%d %d\n", nb, tabb[0]);
		}
	}
}

void	ft_rightpos(int *taba, int *tabb, int sizea, int sizeb)
{
	(void)sizea;
	if (taba[0] > getmax(tabb, sizeb))
		ft_topb(getmax(tabb, sizeb), tabb, sizeb);
	else if (taba[0] < getmin(tabb, sizeb))
		ft_topb(getmax(tabb, sizeb), tabb, sizeb);
	else if (taba[0] > tabb[0] && taba[0] < tabb[sizeb - 1])
		return ;
	else
	{
		while (taba[0] > tabb[0] || taba[0] < tabb[1])
		{
			ft_rb(tabb, sizeb);
		}
		ft_rb(tabb, sizeb);
	}
}
