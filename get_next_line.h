/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertmantaras <albertmantaras@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 21:10:32 by albertmanta       #+#    #+#             */
/*   Updated: 2022/05/26 00:58:30 by albertmanta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//definir nombre de la libreria 
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# include <fcntl.h>
# include <string.h>

char	*get_next_line(int fd);
//Utils para nuestra funcion
char	*ft_strchr_gnl(char *s, int c);
size_t	ft_strlen_gnl(char *s);
char	*ft_strjoin_gnl(char *left_str, char *buff);

#endif