/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:45:59 by evalenti          #+#    #+#             */
/*   Updated: 2023/03/21 18:47:39 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	idest;
	int	i;

	idest = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[idest + i] = src[i];
		i++;
	}
	dest[idest + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char *src;
	char *dest;
	char *ft_src;
	char *ft_dest;
	char *result;
	char *ft_result;

	src = calloc(7, sizeof(char));
	dest = calloc(12, sizeof(char));
	ft_src = calloc(7, sizeof(char));
	ft_dest = calloc(12, sizeof(char));
	strcpy(src, "galera");
	strcpy(dest, "alo ");
	strcpy(ft_src, "galera");
	strcpy(ft_dest, "alo ");
	result = strcat(dest, src);
	ft_result = ft_strcat(ft_dest, ft_src);
	if (ft_dest != ft_result)
		printf("KO, value is different. %p %p\n", ft_result, ft_dest);
	else if (strcmp(result, ft_result) != 0)
		printf("KO, value is different of zero(%d).\n", strcmp(result, ft_result));
	else
		printf("OK.\nresult: %s\n", ft_result);
	return (0);
}*/
