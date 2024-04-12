/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:10:51 by umosse            #+#    #+#             */
/*   Updated: 2024/04/12 13:54:06 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_freeall(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->taba)
		free (stack->taba);
	if (stack->tabb)
		free (stack->tabb);
	if (stack->res)
	{
		while (stack->res[i])
		{
			free (stack->res[i]);
			i++;
		}
		free (stack->res);
	}
}
