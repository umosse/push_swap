/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:23:46 by umosse            #+#    #+#             */
/*   Updated: 2024/04/08 16:33:17 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

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

typedef struct s_stack
{
	int	*taba;
	int	*tabb;
	int	sizea;
	int	sizeb;
	int	movea;
	int	moveb;

}	t_stack;

void	ft_swap(int *a, int *b);
void	ft_sa(int *str);
void	ft_sb(int *str);
void	ft_ss(int *stra, int *strb);
void	ft_ra(int *str, int size);
void	ft_rb(int *str, int size);
void	ft_rr(t_stack *stack);
void	ft_rra(int *str, int size);
void	ft_rrb(int *str, int size);
void	ft_rrr(t_stack *stack);
int		ft_pa(t_stack *stack);
int		ft_pb(t_stack *stack);
int		getmax(int *tab, int size);
int		getmin(int *tab, int size);
int		gettob(int nb, int *tabb, int size);
int		gettoa(int nb, int *taba, int size);
int		getindex(int nb, int *tab, int size);
void	ft_topa(int nb, t_stack *stack);
void	ft_topb(int nb, t_stack *stack);
void	ft_size3(t_stack *stack);
void	ft_size2(t_stack *stack);
void	ft_rightpos(t_stack *stack);
int		ft_bestmove(t_stack *stack);
int		ft_movesa(int nb, int *taba, int sizea);
int		ft_movesb(int nb, int *tabb, int sizeb);
int		ft_calcrightpos(int nb, t_stack *stack);
void	ft_domove(int best, t_stack *stack);
int		ft_checking(t_stack *stack, int i);
void	ft_pushswap(t_stack *stack, int i);
void	ft_pushswap2(t_stack *stack);
int		ft_double(t_stack *stack, int i);
int		ft_notsplit(int i, int argc, char **argv, t_stack *stack);
int		ft_dosplit(int i, char **argv, t_stack *stack);
int		ft_atol(char *str);

#endif