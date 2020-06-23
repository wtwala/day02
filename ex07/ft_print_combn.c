/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtwala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 12:22:16 by wtwala            #+#    #+#             */
/*   Updated: 2020/06/23 12:55:16 by wtwala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_combn(int n)
{
	char a;
	char b;
	

	if( n > 10 && n > 0)
	{
		a = '0';
		while( a <= '9')
		{
			b = '0';
			while( b <= '9')
			{

				ft_putchar(' ');
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(',');
				b++;
			}
			a++;
		}
	}
}

