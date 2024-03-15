/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:57:34 by umosse            #+#    #+#             */
/*   Updated: 2024/03/14 14:37:31 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(int *str, int size)
{
	int	i;

	i = size - 1;
	while (i > 0)
	{
		ft_swap(&(str[i]), &(str[i - 1]));
		i--;
	}
	write (1, "rra\n", 4);
}

void	ft_rrb(int *str, int size)
{
	int	i;

	i = size - 1;
	while (i > 0)
	{
		ft_swap(&str[i], &str[i - 1]);
		i--;
	}
	write (1, "rrb\n", 4);
}

void	ft_rrr(int *stra, int *strb, int size)
{
	ft_rra(stra, size);
	ft_rrb(strb, size);
	write (1, "rrr\n", 4);
}
