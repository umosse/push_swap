/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:57:27 by umosse            #+#    #+#             */
/*   Updated: 2024/03/22 15:21:03 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(int *str, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		ft_swap(&(str[i]), &(str[i + 1]));
		i++;
	}
	write (1, "ra\n", 3);
}

void	ft_rb(int *str, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		ft_swap(&(str[i]), &(str[i + 1]));
		i++;
	}
	write (1, "rb\n", 3);
}

void	ft_rr(int *taba, int *tabb, int sizea, int sizeb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < sizea - 1)
	{
		ft_swap(&(taba[i]), &(taba[i + 1]));
		i++;
	}
	while (j < sizeb - 1)
	{
		ft_swap(&(tabb[i]), &(tabb[i + 1]));
		i++;
	}
	write (1, "rr\n", 3);
}
