/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:23:46 by umosse            #+#    #+#             */
/*   Updated: 2024/03/20 13:40:26 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include "Libft/libft.h"
# include <stddef.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>

void	ft_swap(int *a, int *b);
void	ft_sa(int *str);
void	ft_sb(int *str);
void	ft_ss(int *stra, int *strb);
void	ft_ra(int *str, int size);
void	ft_rb(int *str, int size);
void	ft_rr(int *stra, int *strb, int size);
void	ft_rra(int *str, int size);
void	ft_rrb(int *str, int size);
void	ft_rrr(int *stra, int *strb, int size);
int		ft_pa(int *taba, int *tabb, int sizea, int sizeb);
int		ft_pb(int *taba, int *tabb, int sizea, int sizeb);
int		getmax(int *tab, int size);
int		getmin(int *tab, int size);
int		gettob(int nb, int *tabb, int size);
int		gettoa(int nb, int *taba, int size);
int		getindex(int nb, int *tab, int size);
void	ft_topa(int nb, int *taba, int sizea);
void	ft_topb(int nb, int *tabb, int sizeb);
void	ft_size3(int *taba);
void	ft_size2(int *taba);
void	ft_rightpos(int *taba, int *tabb, int sizea, int sizeb);




#endif