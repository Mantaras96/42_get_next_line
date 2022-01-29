/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertmantaras <albertmantaras@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 21:10:30 by albertmanta       #+#    #+#             */
/*   Updated: 2022/01/27 22:33:41 by albertmanta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	if (!s1 && !s2)
		return (NULL);
	else
	{
		if (!s1)
			return (ft_strdup(s2));
		else if (!s2)
			return (ft_strdup(s1));
	}
	len = ft_strlen(s1) + ft_strlen(s2);
	if ((int)len < 0)
		return (NULL);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, (s1), ft_strlen(s1) + 1);
	ft_strlcpy((str + ft_strlen(s1)), (s2), ft_strlen(s2) + 1);
	return (str);
}

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	j;

	ptr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ptr)
	{
		return (NULL);
	}
	j = 0;
	while (s[j])
	{
		ptr[j] = s[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}


