/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <jvander-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:47:48 by jvander-          #+#    #+#             */
/*   Updated: 2021/10/07 16:02:46 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_free_all(t_stack *stack_a, t_stack *stack_b, char **args)
{
	if (stack_a)
		ft_free_stack(stack_a);
	if (stack_b)
		ft_free_stack(stack_b);
	if (args)
		ft_free(args, ft_tabsize(args));
	return (0);
}
