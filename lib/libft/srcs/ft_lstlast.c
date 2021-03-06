/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <rlecart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 06:32:51 by rlecart           #+#    #+#             */
/*   Updated: 2017/08/30 20:15:19 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstlast(t_list **alst)
{
	t_list		*ptr;

	ptr = *alst;
	while (ptr->next)
		ptr = ptr->next;
	return (ptr);
}
