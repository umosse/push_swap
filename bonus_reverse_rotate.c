/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_reverse_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:37:29 by umosse            #+#    #+#             */
/*   Updated: 2024/04/09 15:51:23 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_checker.h"

void	ft_rra(int *str, int size)
{
	int	i;

	i = size - 1;
	while (i > 0)
	{
		ft_swap(&(str[i]), &(str[i - 1]));
		i--;
	}
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
}

void	ft_rrr(t_bonus *bonus)
{
	int	i;
	int	j;

	i = bonus->sizea - 1;
	j = bonus->sizeb - 1;
	while (i > 0)
	{
		ft_swap(&(bonus->taba[i]), &(bonus->taba[i - 1]));
		i--;
	}
	while (j > 0)
	{
		ft_swap(&bonus->tabb[j], &bonus->tabb[j - 1]);
		j--;
	}
}
