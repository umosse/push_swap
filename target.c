/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:13:43 by umosse            #+#    #+#             */
/*   Updated: 2024/03/21 16:57:26 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	getmax(int *tab, int size)
{
	int	i;
	int	max;

	i = 0;
	max = tab[i];
	while (i < size)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int	getmin(int *tab, int size)
{
	int	i;
	int	min;

	i = 0;
	min = tab[i];
	while (i < size)
	{
		if (tab[i] < min)
			min = tab[i];
		i++;
	}
	return (min);
}

/* int	gettob(int nb, int *tabb, int size)
{
	int	i;
	int	target;

	i = 0;
	target = -2147483648;
	while (tabb[i])
	{
		if (nb > tabb[i] && tabb[i] > target)
		{
			target = tabb[i];
		}
		i++;
	}
	if (target == -2147483648)
		return (getmax(tabb, size));
	return (target);
}

int	gettoa(int nb, int *taba, int size)
{
	int	i;
	int	target;

	i = 0;
	target = 2147483647;
	while (taba[i])
	{
		if (nb < taba[i] && taba[i] < target)
		{
			target = taba[i];
		}
		i++;
	}
	if (target == 2147483647)
		return (getmin(taba, size));
	return (target);
} */

int	getindex(int nb, int *tab, int size)
{
	int	i;

	i = 0;
	while (tab[i] != nb && i < size)
		i++;
	return (i);
}
