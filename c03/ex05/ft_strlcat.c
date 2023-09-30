/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:53:32 by evalenti          #+#    #+#             */
/*   Updated: 2023/03/21 18:55:04 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	d;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	c = ft_strlen(dest);
	d = 0;
	while (src[d] != '\0' && c + 1 < size)
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[d]));
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	char	*src;
	char	*dest;
	char	*ft_dest;

	src = "stuv";
	dest = "abcdefghijklmnopr";
	ft_dest = "abcdefghijklmnopr";
	printf("%s, %s, %u", src, dest, ft_strlcat(dest, src, 4));
	//ft_strlcat(dest, ft_dest, src, 1);
	//ft_strlcat(dest, ft_dest, src, 4);
	//ft_strlcat(dest, ft_dest, src, 10);
	//src = "ghijkl";
	//ft_strlcat_test(dest, ft_dest, src, 8);
	//ft_strlcat_test(dest, ft_dest, src, 10);
	return (0);
}*/
