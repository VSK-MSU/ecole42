/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 19:41:02 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/18 11:56:06 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	change(char *a, char *b)
{
	while (*a != '\0')
	{
		*b = *a;
		a++;
		b++;
	}
}

void	ft_rev_int_tab(int *tab, int size)
{
	int		*p;
	int		i;
	int		a;

	p = &a;
	i = 1;
	tab += size - 1;
	while (i <= size)
	{
		*p = *tab;
		p++;
		tab -= 1;
		i++;
	}
	change(p, tab);
}
