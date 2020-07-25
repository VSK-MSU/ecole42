/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 11:30:45 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/21 13:48:13 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//int		ft_strlen(char *str)
//{
//	int i;
//
//	i=0;
//	while (*(str + i) != '\0')
//		i++;
//	return(i);
//}

int		ft_strlen(char *str)
{
	int k = 0;
	if (*str != '\0')
		k = ft_strlen(++str)  + 1;
	return(k);
}

int		main ()
{
	char A[] = "sdfghjkl;";
	char B[] = "pesta";
	char P[] = "";
	printf("%d\n", ft_strlen(A));
	printf("%ld\n", strlen(A));
	printf("%d\n", ft_strlen(B));
	printf("%ld\n", strlen(B));
	printf("%d\n", ft_strlen(P));
	printf("%ld\n", strlen(P));
}
