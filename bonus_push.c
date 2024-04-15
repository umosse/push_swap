/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:45:26 by umosse            #+#    #+#             */
/*   Updated: 2024/04/15 15:51:40 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_checker.h"

int	ft_pa(t_bonus *bonus)
{
	int	j;

	if (bonus->sizeb == 0)
	{
		write(2, "Nothing to push\n", 16);
		return (0);
	}
	j = bonus->sizea - 1;
	while (j >= 0)
	{
		bonus->taba[j + 1] = bonus->taba[j];
		j--;
	}
	bonus->taba[0] = bonus->tabb[0];
	j = 0;
	while (j < bonus->sizeb - 1)
	{
		bonus->tabb[j] = bonus->tabb[j + 1];
		j++;
	}
	bonus->sizea++;
	bonus->sizeb--;
	return (1);
}

int	ft_pb(t_bonus *bonus)
{
	int	j;

	if (bonus->sizea == 0)
	{
		write(2, "Nothing to push\n", 16);
		return (0);
	}
	j = bonus->sizeb - 1;
	while (j >= 0)
	{
		bonus->tabb[j + 1] = bonus->tabb[j];
		j--;
	}
	bonus->tabb[0] = bonus->taba[0];
	j = 0;
	while (j < bonus->sizea - 1)
	{
		bonus->taba[j] = bonus->taba[j + 1];
		j++;
	}
	bonus->sizea--;
	bonus->sizeb++;
	return (1);
}
