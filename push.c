/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:57:36 by umosse            #+#    #+#             */
/*   Updated: 2024/03/27 14:32:54 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_pa(t_stack *stack)
{
	int	j;

	j = stack->sizea - 1;
	while (j >= 0)
	{
		stack->taba[j + 1] = stack->taba[j];
		j--;
	}
	stack->taba[0] = stack->tabb[0];
	j = 0;
	while (j < stack->sizeb - 1)
	{
		stack->tabb[j] = stack->tabb[j + 1];
		j++;
	}
	write (1, "pa\n", 3);
	return (1);
}

int	ft_pb(t_stack *stack)
{
	int	j;

	j = stack->sizeb - 1;
	while (j >= 0)
	{
		stack->tabb[j + 1] = stack->tabb[j];
		j--;
	}
	stack->tabb[0] = stack->taba[0];
	j = 0;
	while (j < stack->sizea - 1)
	{
		stack->taba[j] = stack->taba[j + 1];
		j++;
	}
	write (1, "pb\n", 3);
	return (1);
}
