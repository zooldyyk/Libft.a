/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:32:32 by eschmid           #+#    #+#             */
/*   Updated: 2021/10/20 12:03:04 by eschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((*s) != '\0' && (*s) != c)
		s++;
	if ((*s) == c)
		return ((char *)s);
	return (NULL);
}
/*
int main ()
{
	const char *s = "hello"; 
	int c ='h';

	printf("%s\n", ft_strchr(s,c));
	printf("%s\n", strchr(s,c));
}*/
