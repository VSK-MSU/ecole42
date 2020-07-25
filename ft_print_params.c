/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 15:49:12 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/23 15:59:34 by ezaynabi         ###   ########.fr       */
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
	int i;

	i = 1;
	(void)argc;
	(void)argv;
	while (argv[i])
		ft_printf_nl(argv[i++]);
	return (0);
}
