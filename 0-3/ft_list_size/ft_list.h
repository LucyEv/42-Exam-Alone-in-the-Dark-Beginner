/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levstrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 15:15:42 by levstrat          #+#    #+#             */
/*   Updated: 2019/02/16 15:36:12 by levstrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_LIST_H
# define FT_LIST_H

typedef struct	s_list
{
	struct s_list *next;
	void	*data;
}	t_list;

int	ft_list_size(t_list *begin_list);

#endif
