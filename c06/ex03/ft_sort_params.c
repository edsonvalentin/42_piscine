/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:03:42 by evalenti          #+#    #+#             */
/*   Updated: 2023/03/28 15:04:00 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (++i <= argc)
	{
		j = 1;
		while (++j <= argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j - 1]) < 0)
			{
				temp = argv[j];
				argv[j] = argv[j - 1];
				argv[j - 1] = temp;
			}
		}
	}	
	i = 0;
	while (++i < argc)
		ft_putstr(argv[i]);
}
