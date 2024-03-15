/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:57:31 by umosse            #+#    #+#             */
/*   Updated: 2024/03/08 15:25:07 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(int *str)
{
	int	i;

	i = 0;
	ft_swap(&(str[i]), &(str[i + 1]));
	write (1, "sa\n", 3);
}

void	ft_sb(int *str)
{
	int	i;

	i = 0;
	ft_swap(&(str[i]), &(str[i + 1]));
	write (1, "sb\n", 3);
}

void	ft_ss(int *stra, int *strb)
{
	ft_sa(stra);
	ft_sb(strb);
	write (1, "ss\n", 3);
}
