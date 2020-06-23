/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtwala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:27:45 by wtwala            #+#    #+#             */
/*   Updated: 2020/06/23 12:16:13 by wtwala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <math.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	int ls;
	int fs;
	int	count;

	count = log10(nb);
	fs = nb / pow(10,count);
	fs = fs + '0';
	ft_putchar(fs);
	ls = nb % 10;
	ls = ls + '0';
	ft_putchar(ls);
	
}

