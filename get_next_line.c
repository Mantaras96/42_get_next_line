/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertmantaras <albertmantaras@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 21:10:38 by albertmanta       #+#    #+#             */
/*   Updated: 2022/01/26 23:05:34 by albertmanta      ###   ########.fr       */
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

char    *get_next_line(int fd);
