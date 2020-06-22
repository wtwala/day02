/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtwala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 17:04:28 by wtwala            #+#    #+#             */
/*   Updated: 2020/06/22 09:42:25 by wtwala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	char a;
	char b;
	char d; 
	
	a = '0';

	while( a <= '9')
	{
		b = a + 1;

		while(b <= '9')
		{
			d = b + 1;
			
			while(d <= '9')
			{
			  ft_putchar(a);
			  ft_putchar(b);
			  ft_putchar(d);
			  ft_putchar(',');
			  ft_putchar(' ');
			  
			  d = d + 1;
			}
			b = b + 1;
		}
		 a = a + 1;
	}
}
