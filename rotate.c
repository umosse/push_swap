/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:57:27 by umosse            #+#    #+#             */
/*   Updated: 2024/04/02 14:29:20 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(int *str, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		ft_swap(&(str[i]), &(str[i + 1]));
		i++;
	}
	write (1, "ra\n", 3);
}

void	ft_rb(int *str, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		ft_swap(&(str[i]), &(str[i + 1]));
		i++;
	}
	write (1, "rb\n", 3);
}

void	ft_rr(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < stack->sizea - 1)
	{
		ft_swap(&(stack->taba[i]), &(stack->taba[i + 1]));
		i++;
	}
	while (j < stack->sizeb - 1)
	{
		ft_swap(&(stack->tabb[j]), &(stack->tabb[j + 1]));
		j++;
	}
	write (1, "rr\n", 3);
}
