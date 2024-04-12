/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:57:45 by umosse            #+#    #+#             */
/*   Updated: 2024/04/12 17:06:33 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pushswap2(t_stack *stack)
{
	ft_topb(getmax(stack->tabb, stack->sizeb), stack);
	if (stack->sizea == 3)
		ft_size3(stack);
	while (stack->sizeb > 0)
	{
		if (stack->tabb[0] < getmin(stack->taba, stack->sizea))
		{
			ft_topa(getmin(stack->taba, stack->sizea), stack);
			stack->sizea += ft_pa(stack);
			stack->sizeb--;
		}
		else if (stack->tabb[0] < stack->taba[stack->sizea - 1])
			ft_rra(stack->taba, stack->sizea);
		else if (stack->sizeb > 0)
		{
			stack->sizea += ft_pa(stack);
			stack->sizeb--;
		}
	}
	ft_topa(getmin(stack->taba, stack->sizea), stack);
}

void	ft_pushswap(t_stack *stack, int i)
{
	stack->sizea = i;
	stack->sizeb = 0;
	if (stack->sizea == 2)
		ft_size2(stack);
	else if (ft_checking(stack, i) == 0)
	{
		if (stack->sizea > 3)
		{
			stack->sizea -= ft_pb(stack);
			stack->sizeb++;
		}
		if (stack->sizea > 3)
		{
			stack->sizea -= ft_pb(stack);
			stack->sizeb++;
		}
	}
	while (stack->sizea > 3)
	{
		ft_domove(stack->taba[ft_bestmove(stack)], stack);
		stack->sizea -= ft_pb(stack);
		stack->sizeb++;
	}
	ft_pushswap2(stack);
}

int	ft_dosplit(int i, char **argv, t_stack *stack)
{
	int		j;

	j = 0;
	stack->res = ft_split(argv[1], ' ');
	if (!stack->res)
	{
		ft_freeall(stack);
		return (-1);
	}
	while (stack->res[i])
		i++;
	stack->taba = ft_calloc(i, 4);
	stack->tabb = ft_calloc(i, 4);
	if (!stack->taba || !stack->tabb)
	{
		ft_freeall(stack);
		return (-1);
	}
	i = ft_dosplit2(i, stack);
	if (i == -1)
		return (-1);
	free (stack->res);
	stack->res = NULL;
	i++;
	return (i);
}

int	ft_notsplit(int i, int argc, char **argv, t_stack *stack)
{
	stack->taba = ft_calloc(argc, 4);
	stack->tabb = ft_calloc(argc, 4);
	if (!stack->taba || !stack->tabb)
	{
		ft_freeall(stack);
		return (-1);
	}
	i++;
	while (i < argc)
	{
		if (ft_strlen(argv[i]) > 11)
			return (-1);
		if (ft_atol(argv[i]) == -1)
			return (-1);
		stack->taba[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int		i;
	t_stack	stack;

	stack.taba = NULL;
	stack.tabb = NULL;
	stack.res = NULL;
	if (argc >= 2)
	{
		if (argc == 2)
			i = ft_dosplit(0, argv, &stack);
		else
			i = ft_notsplit(0, argc, argv, &stack);
		if (ft_double(&stack, i - 1) == -1 && i != -1)
		{
			write (2, "Error\n", 6);
			ft_freeall(&stack);
			return (0);
		}
		if (i > 1 && ft_checking(&stack, i) == 0)
			ft_pushswap(&stack, i - 1);
		if (i == -1)
			write (2, "Error\n", 6);
		ft_freeall(&stack);
	}
	return (0);
}
