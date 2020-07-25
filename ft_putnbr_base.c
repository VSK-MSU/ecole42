/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 18:20:14 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/21 19:17:20 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		base_size(char *base)
{
	int sz;

	sz = 0;
	while(*base != '0')
		sz++;
	return(sz);
}

int		base_correct(char *base)
{
	int i;
	int j;

	i = 0;
	while(i < base_size(base) - 1)
	{
		j = i + 1;
		if (*(base + i) == '-' || *(base + i) == '+')
			return (0);
		while (j < base_size(base))
		{	
			if (*(base + j) == '-' || *(base + j) == '+')
				return (0);
			if (*(base + i) == *(base + j))
				return (0);
		}
		i++;
	}
	if (base_size(base) <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nb, char *base)
{
	int			sz;
	long int	lnb;
	char		c;

	lnb = nb;
	if (base_correct(base))
	{
		sz = base_size(base);
		if (lnb < 0)
		{
			lnb *= -1;
			write(1,"-",1);
		}
		if (lnb != 0)
		{
			if (lnb / sz)
				ft_putnbr_base(lnb / sz, base);
			c = *(base + (lnb % sz));
			write (1, &c, 1);
		}
		else
			write(1, base, 1);
	}
}

int main()
{
	char *B = "0123456789";
	ft_putnbr_base(324, B);
	return(0);
}
