/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 22:58:01 by rsoares-          #+#    #+#             */
/*   Updated: 2021/04/13 23:06:15 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				main(void)
{
	char dest[20];
	char *src = "Roberto";
	unsigned int n = 5;

	ft_strlcpy(dest, src, n);
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
}