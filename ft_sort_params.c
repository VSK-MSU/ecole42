/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 20:21:00 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/23 20:32:47 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printf_nl(char *c)
{
	while (*c != '\0')
		write(1, c++, 1);
	write(1, "\n", 1);
}

void	ft_strswp(char **s1, char **s2)
{
	char *s1_buffer;

	s1_buffer = *s1;
	*s1 = *s2;
	*s2 = s1_buffer;
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 < *s2)
			return (*s1 - *s2);
		else if (*s1 > *s2)
			return (*s1 - *s2);
		else
		{
			s1++;
			s2++;
		}
	}
	if (*s1 == '\0' || *s2 == '\0')
	{
		return (*s1 - *s2);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	(void)argc;
	(void)argv;
	i = 0;
	while (argv[i])
	{
		j = 1;
		while (argv[j + 1])
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				ft_strswp(&argv[j], &argv[j + 1]);
			j++;
		}
		i++;
	}
	i = 1;
	while (argv[i])
		ft_printf_nl(argv[i++]);
	return (0);
}
