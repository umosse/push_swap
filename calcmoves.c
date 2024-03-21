/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcmoves.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:59:21 by umosse            #+#    #+#             */
/*   Updated: 2024/03/21 16:55:36 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//There may be some problems here
int	ft_calcrightpos(int nb, int *tabb, int sizea, int sizeb)
{
	int	i;

	i = 0;
	(void)sizea;
	if (nb > getmax(tabb, sizeb))
		return (getindex(getmax(tabb, sizeb), tabb, sizeb));
	else if (nb < getmin(tabb, sizeb))
		return (getindex(getmax(tabb, sizeb), tabb, sizeb));
	else if (nb > tabb[0] && nb < tabb[sizeb - 1])
		return (0);
	else
	{
		while (nb > tabb[i] || nb < tabb[i + 1])
		{
			i++;
		}
		if (nb > tabb[i])
			return (i);
		else
			return (i + 1);
	}
}

int	ft_movesa(int nb, int *taba, int sizea)
{
	if (getindex(nb, taba, sizea) < sizea / 2)
		return (getindex(nb, taba, sizea));
	else
		return ((sizea - getindex(nb, taba, sizea) - 1) * -1);
}

int	ft_movesb(int nb, int *tabb, int sizeb)
{
	if (getindex(nb, tabb, sizeb) < sizeb / 2)
		return (getindex(nb, tabb, sizeb));
	else
		return ((sizeb - getindex(nb, tabb, sizeb) - 1) * -1);
}

int	ft_bestmove(int *taba, int *tabb, int sizea, int sizeb)
{
	int	i;
	int	j;
	int	movea;
	int	moveb;
	int	best;
	int	old_best;
	int	best_index;

	i = 0;
	j = 0;
	old_best = 2147483647;
	while (i < sizea)
	{
		movea = ft_movesa(taba[i], taba, sizea);
		while (j != ft_calcrightpos(taba[i], tabb, sizea, sizeb))
		{
			j++;
		}
		moveb = ft_movesb(tabb[j], tabb, sizeb);
		if (movea >= 0 && moveb >= 0)
		{
			if (movea > moveb)
				best = movea;
			else
				best = moveb;
		}
		else if (movea < 0 && moveb < 0)
		{
			if (movea < moveb)
				best = movea * -1;
			else
				best = moveb * -1;
		}
		else
		{
			if (movea < 0)
				best = (movea * -1) + moveb;
			else if (moveb < 0)
				best = (moveb * -1) + movea;
		}
		if (best < old_best)
		{
			old_best = best;
			best_index = getindex(taba[i], taba, sizea);
		}
		i++;
	}
	return (best_index);
}
