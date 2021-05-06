/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:52:20 by rsoares-          #+#    #+#             */
/*   Updated: 2021/04/13 18:58:39 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str);

int		main(void)
{
	char *str;
	int a;

	str = "";
	a = ft_str_is_lowercase(str);
	printf("String vazia: %d\n", a);
	str = "roberto";
	a = ft_str_is_lowercase(str);
	printf("String 'roberto': %d\n", a);
	str = "Roberto";
	a = ft_str_is_lowercase(str);
	printf("String 'Roberto': %d\n", a);
	str = "Roberto 0123";
	a = ft_str_is_lowercase(str);
	printf("String 'Roberto 0123': %d\n", a);
	str = "#@$#$&0123";
	a = ft_str_is_lowercase(str);
	printf("String '#@$#$*&$&0123': %d\n", a);
}