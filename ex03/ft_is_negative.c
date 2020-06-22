/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtwala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 14:52:54 by wtwala            #+#    #+#             */
/*   Updated: 2020/06/22 09:40:47 by wtwala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_is_negative(int n)
{
	
	char c;
	if( 0 >= n)
	{
			c = 'N';
			ft_putchar(c);
	
		}
	else
		{
			c = 'P';
			ft_putchar(c);
		}
	}


