/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:57:27 by umosse            #+#    #+#             */
/*   Updated: 2024/03/14 15:33:31 by umosse           ###   ########.fr       */
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

void	ft_rr(int *stra, int *strb, int size)
{
	ft_ra(stra, size);
	ft_rb(strb, size);
	write (1, "rr\n", 3);
}
