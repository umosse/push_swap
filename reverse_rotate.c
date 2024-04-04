/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:57:34 by umosse            #+#    #+#             */
/*   Updated: 2024/04/02 14:32:27 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(int *str, int size)
{
	int	i;

	i = size - 1;
	while (i > 0)
	{
		ft_swap(&(str[i]), &(str[i - 1]));
		i--;
	}
	write (1, "rra\n", 4);
}

void	ft_rrb(int *str, int size)
{
	int	i;

	i = size - 1;
	while (i > 0)
	{
		ft_swap(&str[i], &str[i - 1]);
		i--;
	}
	write (1, "rrb\n", 4);
}

void	ft_rrr(t_stack *stack)
{
	int	i;
	int	j;

	i = stack->sizea - 1;
	j = stack->sizeb - 1;
	while (i > 0)
	{
		ft_swap(&(stack->taba[i]), &(stack->taba[i - 1]));
		i--;
	}
	while (j > 0)
	{
		ft_swap(&stack->tabb[j], &stack->tabb[j - 1]);
		j--;
	}
	write (1, "rrr\n", 4);
}
