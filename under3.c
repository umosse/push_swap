/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   under3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:03:17 by umosse            #+#    #+#             */
/*   Updated: 2024/03/29 13:37:27 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_size3(t_stack *stack)
{
	if (stack->taba[0] > stack->taba[1])
	{
		if (stack->taba[1] > stack->taba[2])
		{
			ft_sa(stack->taba);
			ft_rra(stack->taba, 3);
		}
		else if (stack->taba[1] < stack->taba[2])
		{
			if (stack->taba[0] > stack->taba[2])
				ft_ra(stack->taba, 3);
			else if (stack->taba[0] < stack->taba[2])
				ft_sa(stack->taba);
		}
	}
	if (stack->taba[0] < stack->taba[1])
	{
		if (stack->taba[0] > stack->taba[2])
			ft_rra(stack->taba, 3);
		else if (stack->taba[1] > stack->taba[2])
		{
			ft_sa(stack->taba);
			ft_ra(stack->taba, 3);
		}
	}
}

void	ft_size2(t_stack *stack)
{
	if (stack->taba[0] > stack->taba[1])
		ft_sa(stack->taba);
}
