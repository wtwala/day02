/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtwala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:14:57 by wtwala            #+#    #+#             */
/*   Updated: 2020/06/23 11:18:07 by wtwala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{

	char a;
	char b;
	char c;
	char d;

	a = '0';

	while( a <= '9')
	{
	
		b = '0';	
		while( b <= '9')
		{
			c = '0';

			while( c <= '9')
			{

				d = '0';				
					while( d <= '9')
					{
						if(a <c || (a == c && b < d))
						{
							ft_putchar(a);
							ft_putchar(b);
							ft_putchar(' ');
							ft_putchar(c);
							ft_putchar(d);
							ft_putchar(',');
							ft_putchar(' ');
						}
							d++;					
					}

				 c++;
			}	
		
			b++;
		}

		a++;
	}
}

