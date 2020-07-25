/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 15:21:08 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/23 15:56:22 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printf_nl(char *c)
{
	while (*c != '\0')
		write(1, c++, 1);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	ft_printf_nl(argv[0]);
	return (0);
}
