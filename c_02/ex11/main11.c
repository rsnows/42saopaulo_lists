/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main11.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 23:20:53 by rsoares-          #+#    #+#             */
/*   Updated: 2021/04/13 23:22:19 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_non_printable(char *str);

int		main(void)
{
	char *str;

	str = "Oi\nvoce esta bem?";
	ft_putstr_non_printable(str);
}