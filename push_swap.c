/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:57:45 by umosse            #+#    #+#             */
/*   Updated: 2024/03/15 16:09:30 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "Libft/libft.h"
#include <stdio.h>

int	ft_checking(int *taba, int i)
{
	int	k;
	int	j;

	k = 0;
	j = 1;
	if (i <= 0)
		return (0);
	else
	{
		while (taba[k] && taba[j])
		{
			if (taba[k] < taba[j])
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

int	ft_calcmoves(int *taba, int *tabb, int sizea, int sizeb)
{
	int	i;
	int	j;
	int	count;
	int	target;
	int	min;
	int	res;

	i = 0;
	j = 0;
	count = 0;
	min = 2147483647;
	res = 0;
	while (taba[i])
	{
		target = gettob(taba[i], tabb, sizea);
		while (tabb[j])
		{
			if (taba[i] > sizea / 2)
				count = i;
			else
				count = sizea - i;
			if (target > sizeb / 2)
				count += getindex(target, tabb);
			else
				count += sizeb - getindex(target, tabb);
			i++;
			if (count < min)
			{
				min = count;
				res = taba[i];
			}
		}
	}
	return (res);
}

void	ft_pushswap(int *taba, int *tabb, int i)
{
	int	sizea;
	int	sizeb;

	sizea = i;
	sizeb = 0;
	if (sizea == 2)
		ft_size2(taba);
	else if (ft_checking(taba, i) == 0)
	{
		if (sizea > 3)
		{
			sizea -= ft_pb(taba, tabb, sizea, sizeb);
			sizeb++;
		}
		if (sizea > 3)
		{
			sizea -= ft_pb(taba, tabb, sizea, sizeb);
			sizeb++;
		}
	}
	while (sizea > 3)
	{
		ft_topa(getmax(taba, sizea), taba, sizea);
		sizea -= ft_pb(taba, tabb, sizea, sizeb);
		sizeb++;
	}
	ft_topb(getmax(tabb, sizeb), tabb, sizeb);
	if (sizea == 3)
		ft_size3(taba);
	while (sizeb > 0)
	{
		if (tabb[0] < getmin(taba, sizea))
		{
			sizea += ft_pa(taba, tabb, sizea, sizeb);
			sizeb--;
		}
		else if (tabb[0] < taba[sizea - 1])
			ft_rra(taba, sizea);
		else if (sizeb > 0)
		{
			sizea += ft_pa(taba, tabb, sizea, sizeb);
			sizeb--;
		}
	}
	ft_topa(getmin(taba, sizea), taba, sizea);
}

int	main(int argc, char **argv)
{
	int		i;
	int		*taba;
	int		*tabb;
	char	**res;

	i = 1;
	taba = NULL;
	tabb = NULL;
	if (argc >= 2)
	{
		taba = ft_calloc(argc, 4);
		tabb = ft_calloc(argc, 4);
		if (!taba || !tabb)
			return (0);
		if (argc == 2)
		{
			res = ft_split(argv[1], ' ');
			while (res[i])
			{
				taba[i] = ft_atoi(res[i]);
				i++;
			}
			free (res);
		}
		else
		{
			while (i < argc)
			{
				taba[i - 1] = ft_atoi(argv[i]);
				i++;
			}
		}
		if (i > 1)
		{
			ft_pushswap(taba, tabb, i - 1);
			i = 0;
			while (i < argc - 1)
				printf("%d\n", taba[i++]);
		}
		else
		{
			ft_putstr_fd(argv[1], 1);
			write(1, "\n", 1);
		}
		free(tabb);
		free(taba);
	}
	return (0);
}
