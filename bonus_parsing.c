/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:53:33 by umosse            #+#    #+#             */
/*   Updated: 2024/04/15 16:12:55 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_checker.h"

void	ft_freeall(t_bonus *bonus)
{
	int	i;

	i = 0;
	if (bonus->taba)
		free (bonus->taba);
	if (bonus->tabb)
		free (bonus->tabb);
	if (bonus->res)
	{
		while (bonus->res[i])
		{
			free (bonus->res[i]);
			i++;
		}
		free (bonus->res);
	}
}

int	ft_checking2(t_bonus *bonus, int i)
{
	int	k;
	int	j;

	k = 0;
	j = 1;
	if (i <= 0)
		return (0);
	else
	{
		while (k < bonus->sizea && j < bonus->sizea)
		{
			if (bonus->taba[k] < bonus->taba[j])
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

int	ft_double(t_bonus *bonus, int i)
{
	int	j;
	int	k;

	j = 0;
	while (j < i)
	{
		k = 0;
		while (k < i)
		{
			if (k != j && bonus->taba[j] == bonus->taba[k])
				return (-1);
			k++;
		}
		j++;
	}
	return (1);
}

int	ft_atol(char *str)
{
	long	nb;
	int		sign;
	long	i;

	i = 0;
	sign = 1;
	nb = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
			return (-1);
		nb = nb * 10 + (str[i] - '0');
		if ((nb * sign) > INT_MAX)
			return (-1);
		if ((nb * sign) < INT_MIN)
			return (-1);
		i++;
	}
	return (1);
}
