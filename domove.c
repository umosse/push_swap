/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   domove.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:16:21 by umosse            #+#    #+#             */
/*   Updated: 2024/04/08 16:34:19 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_movep2(int movea, int moveb, t_stack *stack)
{
	int	i;

	i = 0;
	while (i < movea)
	{
		ft_rr(stack);
		i++;
	}
	i = 1;
	while (i <= (moveb - movea))
	{
		ft_rb(stack->tabb, stack->sizeb);
		i++;
	}
}

void	ft_moven2(int movea, int moveb, t_stack *stack)
{
	int	i;

	i = 0;
	while (i > movea)
	{
		ft_rrr(stack);
		i--;
	}
	i = -1;
	while (i >= (moveb - movea))
	{
		ft_rrb(stack->tabb, stack->sizeb);
		i--;
	}
}

void	ft_movep(int movea, int moveb, t_stack *stack)
{
	int	i;

	i = 0;
	if (movea >= moveb)
	{
		while (i < moveb)
		{
			ft_rr(stack);
			i++;
		}
		i = 1;
		while (i <= (movea - moveb))
		{
			ft_ra(stack->taba, stack->sizea);
			i++;
		}
	}
	else
	{
		ft_movep2(movea, moveb, stack);
	}
}

void	ft_moven(int movea, int moveb, t_stack *stack)
{
	int	i;

	i = 0;
	if (movea <= moveb)
	{
		while (i > moveb)
		{
			ft_rrr(stack);
			i--;
		}
		i = -1;
		while (i >= (movea - moveb))
		{
			ft_rra(stack->taba, stack->sizea);
			i--;
		}
	}
	else
	{
		ft_moven2(movea, moveb, stack);
	}
}

void	ft_domove(int best, t_stack *stack)
{
	int	j;
	int	movea;
	int	moveb;

	j = 0;
	movea = ft_movesa(best, stack->taba, stack->sizea);
	while (j != ft_calcrightpos(best, stack))
	{
		j++;
	}
	moveb = ft_movesb(stack->tabb[j], stack->tabb, stack->sizeb);
	if (movea >= 0 && moveb >= 0)
		ft_movep(movea, moveb, stack);
	else if (movea < 0 && moveb < 0)
		ft_moven(movea, moveb, stack);
	else
	{
		ft_topa(best, stack);
		ft_rightpos(stack);
	}
}
