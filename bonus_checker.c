/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:02:49 by umosse            #+#    #+#             */
/*   Updated: 2024/04/15 16:14:17 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_checker.h"

int	ft_dosplit2(int i, t_bonus *bonus)
{
	i = 0;
	while (bonus->res[i])
	{
		if (ft_atol(bonus->res[i]) == -1)
			return (-1);
		bonus->taba[i] = ft_atoi(bonus->res[i]);
		free (bonus->res[i]);
		bonus->res[i] = NULL;
		i++;
	}
	return (i);
}

int	ft_dosplit(int i, char **argv, t_bonus *bonus)
{
	bonus->res = ft_split(argv[1], ' ');
	if (!bonus->res)
	{
		ft_freeall(bonus);
		return (-1);
	}
	while (bonus->res[i])
		i++;
	bonus->taba = ft_calloc(i, 4);
	bonus->sizea = i;
	bonus->tabb = ft_calloc(i, 4);
	bonus->sizeb = 0;
	if (!bonus->taba || !bonus->tabb)
	{
		ft_freeall(bonus);
		return (-1);
	}
	i = ft_dosplit2(i, bonus);
	if (i == -1)
		return (-1);
	free (bonus->res);
	bonus->res = NULL;
	i++;
	return (i);
}

int	ft_notsplit(int i, int argc, char **argv, t_bonus *bonus)
{
	bonus->sizea = argc - 1;
	bonus->sizeb = 0;
	bonus->taba = ft_calloc(argc, 4);
	bonus->tabb = ft_calloc(argc, 4);
	if (!bonus->taba || !bonus->tabb)
	{
		ft_freeall(bonus);
		return (-1);
	}
	i++;
	while (i < argc)
	{
		if (ft_atol(argv[i]) == -1)
			return (-1);
		bonus->taba[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	return (i);
}

void	ft_checker(t_bonus *bonus, int i)
{
	char	*str;
	int		res;

	bonus->sizea = i;
	bonus->sizeb = 0;
	while (1)
	{
		str = get_next_line(0);
		res = ft_input(str, bonus);
		if (res == 0)
			break ;
		else if (res == 2)
		{
			write (2, "Error\n", 6);
			break ;
		}
		free (str);
	}
	free (str);
	if (ft_checking2(bonus, i) == 1)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int argc, char **argv)
{
	int		i;
	t_bonus	bonus;

	bonus.taba = NULL;
	bonus.tabb = NULL;
	bonus.res = NULL;
	if (argc >= 2)
	{
		if (argc == 2)
			i = ft_dosplit(0, argv, &bonus);
		else
			i = ft_notsplit(0, argc, argv, &bonus);
		if (ft_double(&bonus, i - 1) == -1 && i != -1)
		{
			ft_freeall(&bonus);
			write (2, "Error\n", 6);
			return (0);
		}
		if (i > 1 && ft_checking2(&bonus, i) == 0)
			ft_checker(&bonus, i - 1);
		if (i == -1)
			write (2, "Error\n", 6);
		ft_freeall(&bonus);
	}
	return (0);
}
