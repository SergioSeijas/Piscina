/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseijas <sergioseijas.ferreiro@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:14:54 by sseijas           #+#    #+#             */
/*   Updated: 2026/04/21 18:36:09 by sseijas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_2char(int n)
{
	ft_putchar((n / 10) + '0');
	ft_putchar((n % 10) + '0');
}

void	ft_print_comb2(void)
{
	int	m;
	int	n;

	m = 0;
	while (m <= 98)
	{
		n = m + 1;
		while (n <= 99)
		{
			ft_2char(m);
			ft_putchar(' ');
			ft_2char(n);
			if (!(n == 99 && m == 98))
			{
				write(1, ", ", 2);
			}
			n++;
		}
		m++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
