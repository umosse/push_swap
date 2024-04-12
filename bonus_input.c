/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:03:25 by umosse            #+#    #+#             */
/*   Updated: 2024/04/12 16:36:46 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_checker.h"

int	ft_input2(char *str)
{
	if (str == NULL || ft_strcmp(str, "\n") == 0)
		return (0);
	return (2);
}

int	ft_input(char *str, t_bonus *bonus)
{
	if (ft_strcmp(str, "ra\n") == 0)
		ft_ra(bonus->taba, bonus->sizea);
	else if (ft_strcmp(str, "rb\n") == 0)
		ft_rb(bonus->tabb, bonus->sizeb);
	else if (ft_strcmp(str, "rr\n") == 0)
		ft_rr(bonus);
	else if (ft_strcmp(str, "rra\n") == 0)
		ft_rra(bonus->taba, bonus->sizea);
	else if (ft_strcmp(str, "rrb\n") == 0)
		ft_rrb(bonus->tabb, bonus->sizeb);
	else if (ft_strcmp(str, "rrr\n") == 0)
		ft_rrr(bonus);
	else if (ft_strcmp(str, "sa\n") == 0)
		ft_sa(bonus->taba);
	else if (ft_strcmp(str, "sb\n") == 0)
		ft_sb(bonus->tabb);
	else if (ft_strcmp(str, "ss\n") == 0)
		ft_ss(bonus->taba, bonus->tabb);
	else if (ft_strcmp(str, "pa\n") == 0)
		ft_pa(bonus);
	else if (ft_strcmp(str, "pb\n") == 0)
		ft_pb(bonus);
	else
		return (ft_input2(str));
	return (1);
}
