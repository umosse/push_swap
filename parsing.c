/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 13:36:59 by umosse            #+#    #+#             */
/*   Updated: 2024/04/08 16:34:06 by umosse           ###   ########.fr       */
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

int	ft_double(t_stack *stack, int i)
{
	int	j;
	int	k;

	j = 0;
	while (j < i)
	{
		k = 0;
		while (k < i)
		{
			if (k != j && stack->taba[j] == stack->taba[k])
				return (0);
			k++;
		}
		j++;
	}
	return (1);
}

int	ft_atol(char *str)
{
	long	nb;
	int		sign;
	long	i;

	i = 0;
	sign = 1;
	nb = 0;
	while ((str[i] >= 7 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	if ((nb * sign) > INT_MAX)
		return (0);
	if ((nb * sign) < INT_MIN)
		return (0);
	return (1);
}
