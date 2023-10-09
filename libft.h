/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:13:32 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/09 17:56:55 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdio.h>

# include <unistd.h>
# include <stdlib.h>


typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

//Functions Part 1 - Libc functions
size_t	ft_strlen(const char *str);

#endif