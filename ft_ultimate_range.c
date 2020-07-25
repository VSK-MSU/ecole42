/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 11:50:17 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/24 18:30:18 by ezaynabi         ###   ########.fr       */
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

int		ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (min < max)
		return (max - min);
	return (0);
}
