/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:13:43 by umosse            #+#    #+#             */
/*   Updated: 2024/04/02 15:17:21 by umosse           ###   ########.fr       */
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

int	getindex(int nb, int *tab, int size)
{
	int	i;

	i = 0;
	while (tab[i] != nb && i < size)
		i++;
	return (i);
}
