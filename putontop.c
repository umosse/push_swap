/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putontop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:59:54 by umosse            #+#    #+#             */
/*   Updated: 2024/04/15 12:51:53 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_topa(int nb, t_stack *stack)
{
	if (getindex(nb, stack->taba, stack->sizea) < stack->sizea / 2)
	{
		while (stack->taba[0] != nb)
			ft_ra(stack->taba, stack->sizea);
	}
	else
	{
		while (stack->taba[0] != nb)
			ft_rra(stack->taba, stack->sizea);
	}
}

void	ft_topb(int nb, t_stack *stack)
{
	if (getindex(nb, stack->tabb, stack->sizeb) < stack->sizeb / 2)
	{
		while (stack->tabb[0] != nb)
			ft_rb(stack->tabb, stack->sizeb);
	}
	else
	{
		while (stack->tabb[0] != nb)
		{
			ft_rrb(stack->tabb, stack->sizeb);
		}
	}
}

void	ft_rightpos(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->taba[0] > getmax(stack->tabb, stack->sizeb))
		ft_topb(getmax(stack->tabb, stack->sizeb), stack);
	else if (stack->taba[0] < getmin(stack->tabb, stack->sizeb))
		ft_topb(getmax(stack->tabb, stack->sizeb), stack);
	else if (stack->taba[0] > stack->tabb[0]
		&& stack->taba[0] < stack->tabb[stack->sizeb - 1])
		return ;
	else
	{
		while ((i < stack->sizeb - 1) && (stack->taba[0] > stack->tabb[i]
				|| stack->taba[0] < stack->tabb[i + 1]))
		{
			i++;
		}
		ft_topb(stack->tabb[i], stack);
		ft_rb(stack->tabb, stack->sizeb);
	}
}
