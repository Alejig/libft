/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljigmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 14:14:24 by aljigmon          #+#    #+#             */
/*   Updated: 2019/09/17 22:59:04 by aljigmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE_GNL 4096
# define ERROR_GNL -1
# define STILL_GNL 1

typedef struct					s_lst
{
	int				fd;
	char			*tempo;
	struct s_lst	*next;
}								t_lst;

int								get_next_line(const int fd, char **line);

#endif
