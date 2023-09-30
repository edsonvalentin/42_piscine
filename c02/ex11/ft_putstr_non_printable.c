/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:16:44 by evalenti          #+#    #+#             */
/*   Updated: 2023/03/20 18:20:54 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	print_hex(int np)

{
	char	*hex;

	hex = "0123456789abcdef";
	if (np > 16)
	{
		print_hex(np / 10);
		print_hex(np % 10);
	}
	else
		write(1, &hex[np], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 31 && str[i] >= 0) || str[i] == 127)
		{
			write(1, "\\", 1);
			if (str[i] < 16)
				write(1, "0", 1);
			print_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i += 1;
	}
}
/*
#include <unistd.h>

int	main(void)
{
	char str1[] = {'0', '1', 2, 30, 16, '4', 'a', 19, 'C'};
	char str2[] = "Ola\nesta bem?";

	ft_putstr_non_printable(str1);
	write(1, "\n", 1);
	ft_putstr_non_printable(str2);
	write(1, "\n", 1);
	return (0);
}*/
