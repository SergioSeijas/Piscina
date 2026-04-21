/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseijas <sergioseijas.ferreiro@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:42:15 by sseijas           #+#    #+#             */
/*   Updated: 2026/04/21 19:25:15 by sseijas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr_positive(int nb) //lets assume nbr >= 0
{
	if (nb > 9)
	{
		ft_putnbr_positive(nb / 10);

	}
	ft_putchar((nb % 10) + '0');
}

void ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (nb < 0 && nb != -2147483648)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb != -2147483648)
	{
		ft_putnbr_positive(nb);
	}
}

/*int main(void)
{
	ft_putnbr(-2147483648);
	ft_putnbr(42);
	ft_putnbr(-2147483647);
	ft_putnbr(2147483647);
}*/
