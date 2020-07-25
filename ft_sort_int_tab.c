/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 20:11:43 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/17 20:26:53 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	checking(int *a, int *b)
{
	int c;

	if (*a > *b)
	{
		c = *a;
		*a = *b;
		*b = c;
	}
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int a;
	int b;

	i = 1;
	while (i <= size - 1)
	{
		j = 1;
		while (j <= size - 1)
		{
			a = *tab;
			tab += 1;
			b = *tab;
			checking(&a, &b);
			tab -= 1;
			*tab = a;
			tab += 1;
			*tab = b;
		}
		tab -= size - 1;
	}
}
