/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 19:34:13 by rsoares-          #+#    #+#             */
/*   Updated: 2021/04/13 19:56:10 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str);

int		main(void)
{
	char *a;
	char str1[] = "roberto";
	char str2[] = "Roberto";
	char str3[] = "ROBERTO";

	a = ft_strupcase(str1);
	printf("String 'roberto': %s\n", a);
	a = ft_strupcase(str2);
	printf("String 'Roberto': %s\n", a);
	a = ft_strupcase(str3);
	printf("String 'ROBERTO': %s\n", a);
	
}