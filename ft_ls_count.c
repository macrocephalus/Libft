/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_count.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:25:58 by bzhila            #+#    #+#             */
/*   Updated: 2018/01/10 16:00:22 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_ls_count(t_list *lst)
{
	int		i;
	t_list	*top;

	top = lst;
	i = 0;
	while (top)
	{
		++i;
		top = top->next;
	}
	return (i);
}