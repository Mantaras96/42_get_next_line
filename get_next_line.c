/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertmantaras <albertmantaras@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 21:10:38 by albertmanta       #+#    #+#             */
/*   Updated: 2022/01/28 16:21:36 by albertmanta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Planteamiento Incial:
 - Validar el fd y el buffer size

 Funcion para sacar las lineas
 - Crear malloc de buffer size + 1 (Es donde guardaremos los caracteres)
 - Hacer un while de read_bytes del fd y que sea diferente de '\n' con la funcion del libft
 - Hacer un free del malloc al final 

*/

#include "get_next_line.h"

char    *get_next_line(int fd){
	
	char	*temp;
	char	*str;
	char 	*line;
	size_t read_bytes;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	
	str = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!str) {
		return (NULL);
	}
	read_bytes = 1;
	while (read_bytes && !ft_strchr(temp, '\n')){
		read_bytes = read(fd, str, BUFFER_SIZE);
		str[read_bytes] = '\0';
		temp = ft_strjoin(temp, str);
		
	}
	free(str);
	//Tengo todo pero puede haber mas cosas despues del jumline
	//Necesito una funcion
	//Que mientras temp sea diferente de \n o \0 busque
	// while con i++
	// y crear la substr de eso EN NUESTRO LINE mAS abajo
	// 
	if (*line == '\0' || read_bytes == 0) {
		free(*line);
		return (NULL);
	}
	return (line);
}


