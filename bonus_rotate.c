/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:42:03 by umosse            #+#    #+#             */
/*   Updated: 2024/04/09 15:51:33 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_checker.h"

void	ft_ra(int *str, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		ft_swap(&(str[i]), &(str[i + 1]));
		i++;
	}
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
}

void	ft_rr(t_bonus *bonus)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < bonus->sizea - 1)
	{
		ft_swap(&(bonus->taba[i]), &(bonus->taba[i + 1]));
		i++;
	}
	while (j < bonus->sizeb - 1)
	{
		ft_swap(&(bonus->tabb[j]), &(bonus->tabb[j + 1]));
		j++;
	}
}
