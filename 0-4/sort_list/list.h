/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <marvin@42.fr>                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 19:25:39                      #+#    #+#             */
/*   Updated: 2019/04/01 20:12:47                     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct		 s_list
{
	int				data;
	struct s_list	*next;
}					t_list;
