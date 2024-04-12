/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_checker.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:44:11 by umosse            #+#    #+#             */
/*   Updated: 2024/04/12 15:46:42 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_CHECKER_H

# define BONUS_CHECKER_H

# include "Libft/libft.h"
# include "Printf/ft_printf.h"
# include <stddef.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>
# include <limits.h>

typedef struct s_bonus
{
	int		*taba;
	int		*tabb;
	int		sizea;
	int		sizeb;
	char	**res;

}	t_bonus;

int		ft_checking2(t_bonus *bonus, int i);
int		ft_double(t_bonus *bonus, int i);
int		ft_atol(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_swap(int *a, int *b);
void	ft_rra(int *str, int size);
void	ft_rrb(int *str, int size);
void	ft_rrr(t_bonus *bonus);
void	ft_ra(int *str, int size);
void	ft_rb(int *str, int size);
void	ft_rr(t_bonus *bonus);
void	ft_sa(int *str);
void	ft_sb(int *str);
void	ft_ss(int *stra, int *strb);
int		ft_pa(t_bonus *bonus);
int		ft_pb(t_bonus *bonus);
int		ft_input(char *str, t_bonus *bonus);
void	ft_freeall(t_bonus *bonus);

#endif