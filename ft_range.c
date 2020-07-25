/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 11:11:33 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/24 18:30:28 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *ans;
	int	count;

	if (min < max)
	{
		ans = (int*)malloc((max - min) * sizeof(int));
		count = 0;
		while (count < max - min)
		{
			ans[count] = min + count;
			count++;
		}
		return (ans);
	}
	return (NULL);
}
