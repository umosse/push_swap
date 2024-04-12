/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 13:36:59 by umosse            #+#    #+#             */
/*   Updated: 2024/04/12 17:40:32 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isok(int i, t_stack *stack)
{
	if (ft_strcmp(stack->res[i], "0") == 0)
		ft_ra(stack->taba, stack->sizea);
	else if (ft_strcmp(stack->res[i], "1") == 0)
		ft_rb(stack->tabb, stack->sizeb);
	else if (ft_strcmp(stack->res[i], "2") == 0)
		ft_rr(stack);
	else if (ft_strcmp(stack->res[i], "3") == 0)
		ft_rra(stack->taba, stack->sizea);
	else if (ft_strcmp(stack->res[i], "4") == 0)
		ft_rrb(stack->tabb, stack->sizeb);
	else if (ft_strcmp(stack->res[i], "5") == 0)
		ft_rrr(stack);
	else if (ft_strcmp(stack->res[i], "6") == 0)
		ft_sa(stack->taba);
	else if (ft_strcmp(stack->res[i], "7") == 0)
		ft_sb(stack->tabb);
	else if (ft_strcmp(stack->res[i], "8") == 0)
		ft_ss(stack->taba, stack->tabb);
	else if (ft_strcmp(stack->res[i], "9") == 0)
		ft_pa(stack);
	else if (ft_strcmp(stack->res[i], "pb\n") == 0)
		ft_pb(stack);
	else
		return (ft_input2(str));
	return (1);
}

int	ft_dosplit2(int i, t_stack *stack)
{
	i = 0;
	while (stack->res[i])
	{
		if (ft_strlen(stack->res[i]) > 11)
			return (-1);
		if (ft_atol(stack->res[i]) == -1)
			return (-1);
		if ()
			write (2, "Error\n", 6);
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
		return (-1);
	if ((nb * sign) < INT_MIN)
		return (-1);
	return (1);
}
