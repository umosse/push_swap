/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 13:36:59 by umosse            #+#    #+#             */
/*   Updated: 2024/04/16 15:20:25 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_dosplit2(int i, t_stack *stack)
{
	i = 0;
	while (stack->res[i])
	{
		if (ft_atol(stack->res[i]) == -1)
		{
			while (stack->res[i])
			{
				free (stack->res[i]);
				stack->res[i] = NULL;
				i++;
			}
			return (-1);
		}
		stack->taba[i] = ft_atoi(stack->res[i]);
		free (stack->res[i]);
		stack->res[i] = NULL;
		i++;
	}
	return (i);
}

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
		while (k < stack->sizea && j < stack->sizea)
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
	if (i == -1)
		return (-1);
	while (j < i)
	{
		k = 0;
		while (k < i)
		{
			if (k != j && stack->taba[j] == stack->taba[k])
				return (-1);
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
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
			return (-1);
		nb = nb * 10 + (str[i] - '0');
		if ((nb * sign) > INT_MAX)
			return (-1);
		if ((nb * sign) < INT_MIN)
			return (-1);
		i++;
	}
	return (1);
}
