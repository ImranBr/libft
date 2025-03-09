/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarbouc <ibarbouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 03:09:44 by ibarbouc          #+#    #+#             */
/*   Updated: 2025/03/07 17:46:40 by ibarbouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ajoute l’élément ’new’ au début de la liste.

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
