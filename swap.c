/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:57:21 by akaddour          #+#    #+#             */
/*   Updated: 2023/12/17 23:20:16 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *stack, int bonus)
{
	int	tmp;

	if (stack->size_a == 0 || stack->size_a == 1)
		return ;
	tmp = 0;
	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	if (!bonus)
		write(1, "sa\n", 3);
}

void	swap_b(t_stack *stack, int bonus)
{
	int	tmp;

	if (stack->size_b == 0 || stack->size_b == 1)
		return ;
	tmp = 0;
	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	if (!bonus)
		write(1, "sb\n", 3);
}

void	swap_s(t_stack *stack, int bonus)
{
	swap_a(stack, bonus);
	swap_b(stack, bonus);
	if (!bonus)
		write(1, "ss\n", 3);
}
