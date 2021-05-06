/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 17:15:44 by rsoares-          #+#    #+#             */
/*   Updated: 2021/04/04 14:12:16 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Exibir o caractere passado como parâmetro para ft_putchar
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
