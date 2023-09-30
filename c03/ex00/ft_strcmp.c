/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:40:11 by evalenti          #+#    #+#             */
/*   Updated: 2023/03/21 18:43:26 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "abcdefghi";
	char	s2[] = "abcdefg";

	printf("ft_s(s1, s2)\t= %d\n", ft_strcmp(s1, s2));

	return(0);
}*/
