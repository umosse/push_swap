/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:57:45 by umosse            #+#    #+#             */
/*   Updated: 2024/04/04 15:35:47 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "Libft/libft.h"
#include <stdio.h>
#include <sys/types.h>

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
	char	**res;
	
	res = ft_split(argv[1], ' ');
	while (res[i])
	{
		i++;
	}
	stack->taba = ft_calloc(i, 4);
	stack->tabb = ft_calloc(i, 4);
	i = 0;
	while (res[i])
	{
		stack->taba[i] = ft_atoi(res[i]);
		free (res[i]);
		i++;
	}
	free (res);
	return (i);
}

int	ft_notsplit(int i, int argc, char **argv, t_stack *stack)
{
	stack->taba = ft_calloc(argc, 4);
	stack->tabb = ft_calloc(argc, 4);
	if (!stack->taba || !stack->tabb)
	{
		if (!stack->tabb)
		{
			free(stack->tabb);
		}
		return (0);
	}
	i++;
	while (i < argc)
	{
		stack->taba[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	t_stack	stack;

	i = 0;
	j = 0;
	stack.taba = NULL;
	stack.tabb = NULL;
	if (argc >= 2)
	{
		if (argc == 2)
			i = ft_dosplit(i, argv, &stack);
		else
			i = ft_notsplit(i, argc, argv, &stack);
		if (i > 1)
			ft_pushingswap(i, j, &stack);
		else
		{
			ft_putstr_fd(argv[1], 1);
			write(1, "\n", 1);
		}
		free(stack.tabb);
		free(stack.taba);
	}
	return (0);
}
