/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 11:42:18 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/21 14:30:33 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//void		ft_putstr(char *str)
//{
//	while (*str != '\0')
//	{
//		write (1, str, 1);
//		str++;
//	}
//}

void		ft_putstr(char *str)
{
	if (*str)
	{
		write(1,str,1);
		ft_putstr(++str);
	}
}

int		main()
{
	char A[] = "abc\n";
	char B[] = "";
	char C[] = "1\n2\n3\n";
	ft_putstr(A);
	ft_putstr(B);	
	ft_putstr(C);
	return (0);
}
