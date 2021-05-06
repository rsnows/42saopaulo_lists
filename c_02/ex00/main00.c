/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 12:51:46 by rsoares-          #+#    #+#             */
/*   Updated: 2021/04/13 17:01:04 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strcpy(char *dest, char *src);

int		main(void)
{
	char *dest;
	char *src;

	src = calloc(7, sizeof(char));
	src = "Roberto";
	dest = calloc(7, sizeof(char));
	ft_strcpy(dest, src);
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);	
	
	return (0);
}