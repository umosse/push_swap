/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:57:36 by umosse            #+#    #+#             */
/*   Updated: 2024/03/14 15:05:08 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_pa(int *taba, int *tabb, int sizea, int sizeb)
{
	int	j;

	j = sizea - 1;
	while (j >= 0)
	{
		taba[j + 1] = taba[j];
		j--;
	}
	taba[0] = tabb[0];
	j = 0;
	while (j < sizeb - 1)
	{
		tabb[j] = tabb[j + 1];
		j++;
	}
	write (1, "pa\n", 3);
	return (1);
}

int	ft_pb(int *taba, int *tabb, int sizea, int sizeb)
{
	int	j;

	j = sizeb - 1;
	while (j >= 0)
	{
		tabb[j + 1] = tabb[j];
		j--;
	}
	tabb[0] = taba[0];
	j = 0;
	while (j < sizea - 1)
	{
		taba[j] = taba[j + 1];
		j++;
	}
	write (1, "pb\n", 3);
	return (1);
}
