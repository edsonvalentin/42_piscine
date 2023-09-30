/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:03:33 by evalenti          #+#    #+#             */
/*   Updated: 2023/03/16 13:28:00 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a < '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				ft_putchar(c, d, u);
				u++;
			}
			d++;
		}
		c++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
