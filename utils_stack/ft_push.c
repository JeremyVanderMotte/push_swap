/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <jvander-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:04:30 by jvander-          #+#    #+#             */
/*   Updated: 2021/10/12 15:13:49 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../sources/push_swap.h"

int	ft_push(t_stack *stack, t_node *node)
{
	if (!node || !stack)
		return (0);
	node->next = stack->first;
	stack->first = node;
	return (1);
}
