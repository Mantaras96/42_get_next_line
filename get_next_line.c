/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 21:10:38 by albertmanta       #+#    #+#             */
/*   Updated: 2022/02/11 18:50:20 by amantara         ###   ########.fr       */
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

void	getLine(char *str)
{
	size_t	i;
	char	*aux;
	
	i = ft_strlen(str);
	//Crear malloc:	
}

char    *get_next_line(int fd){
	
	static char	*temp;
	char		*str;
	char 		*line;
	size_t		read_bytes;
	
	if (!fd || BUFFER_SIZE <= 0)
		return (0);
	str = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!str)
		return (NULL);
	read_bytes = 1;
	while (read_bytes && !ft_strchr(temp, '\n'))
	{
		read_bytes = read(fd, str, BUFFER_SIZE);
		if(read_bytes == -1)
		{
			free(str);
			return (NULL);
		}
		str[read_bytes] = '\0';
		temp = ft_strjoin(temp, str);	
	}
	free(str);
	line = getLine(temp);
	temp = getStatic(temp);
	//Tengo todo pero puede haber mas cosas despues del jumline
	//Necesito una funcion
	//Que mientras temp sea diferente de \n o \0 busque
	// while con i++
	// y crear la substr de eso EN NUESTRO LINE mAS abajo
	// 
	// if (*line == '\0' || read_bytes == 0) {
	// 	free(line);
	// 	return (NULL);
	// }
	line = NULL;
	return (line);
}




