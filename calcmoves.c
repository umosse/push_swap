/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcmoves.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:59:21 by umosse            #+#    #+#             */
/*   Updated: 2024/04/05 13:23:04 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_calcrightpos(int nb, t_stack *stack)
{
	int	i;

	i = 0;
	(void)stack->sizea;
	if (nb > getmax(stack->tabb, stack->sizeb))
		return (getindex(getmax(stack->tabb, stack->sizeb), stack->tabb, stack->sizeb));
	else if (nb < getmin(stack->tabb, stack->sizeb))
		return (getindex(getmax(stack->tabb, stack->sizeb), stack->tabb, stack->sizeb));
	else if (nb > stack->tabb[0] && nb < stack->tabb[stack->sizeb - 1])
		return (0);
	else
	{
		while (nb > stack->tabb[i] || nb < stack->tabb[i + 1])
		{
			i++;
		}
		if (nb > stack->tabb[i])
			return (i);
		else
			return (i + 1);
	}
}

int	ft_movesa(int nb, int *taba, int sizea)
{
	if (getindex(nb, taba, sizea) <= sizea / 2)
		return (getindex(nb, taba, sizea));
	else
		return ((sizea - getindex(nb, taba, sizea)) * -1);
}

int	ft_movesb(int nb, int *tabb, int sizeb)
{
	if (getindex(nb, tabb, sizeb) <= sizeb / 2)
		return (getindex(nb, tabb, sizeb));
	else
		return ((sizeb - getindex(nb, tabb, sizeb)) * -1);
}

int	ft_totmoves(int movea, int moveb)
{
	int	best;

	best = 0;
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
	return (best);
}

int	ft_bestmove(t_stack *stack)
{
	int	i;
	int	j;
	int	old_best;
	int	best_index;

	i = 0;
	old_best = 2147483647;
	while (i < stack->sizea)
	{
		stack->movea = ft_movesa(stack->taba[i], stack->taba, stack->sizea);
		j = 0;
		while (j != ft_calcrightpos(stack->taba[i], stack))
		{
			j++;
		}
		stack->moveb = ft_movesb(stack->tabb[j], stack->tabb, stack->sizeb);
		if (ft_totmoves(stack->movea, stack->moveb) < old_best)
		{
			old_best = ft_totmoves(stack->movea, stack->moveb);
			best_index = getindex(stack->taba[i], stack->taba, stack->sizea);
		}
		i++;
	}
	return (best_index);
}
