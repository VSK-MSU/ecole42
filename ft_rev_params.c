/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 17:37:15 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/23 20:18:53 by ezaynabi         ###   ########.fr       */
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
		i++;
	while (i > 1)
		ft_printf_nl(argv[(i--) - 1]);
	return (0);
}
