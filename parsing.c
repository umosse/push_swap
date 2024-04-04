/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 13:36:59 by umosse            #+#    #+#             */
/*   Updated: 2024/04/04 13:37:36 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checking(t_stack *stack, int i)
{
	int	k;
	int	j;

	k = 0;
	j = 1;
	if (i <= 0)
		return (0);
	else
	{
		while (stack->taba[k] && stack->taba[j])
		{
			if (stack->taba[k] < stack->taba[j])
			{
				k++;
				j++;
			}
			else
				return (0);
		}
	}
	return (1);
}
