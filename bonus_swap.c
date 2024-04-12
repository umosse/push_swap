/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:43:20 by umosse            #+#    #+#             */
/*   Updated: 2024/04/09 15:51:43 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_checker.h"

void	ft_sa(int *str)
{
	int	i;

	i = 0;
	ft_swap(&(str[i]), &(str[i + 1]));
}

void	ft_sb(int *str)
{
	int	i;

	i = 0;
	ft_swap(&(str[i]), &(str[i + 1]));
}

void	ft_ss(int *stra, int *strb)
{
	ft_sa(stra);
	ft_sb(strb);
}
