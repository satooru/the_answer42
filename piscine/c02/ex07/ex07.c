/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:50:42 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/06/18 17:32:39 by msatoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char	*ft_strupcase(char *str);

int	main(void)
{
	char str1[] = "abcdefghi";
	char str2[] = "AbcDefGhI";
	char str3[] = "ABCDEFGHI";

	printf("str1: %p %s\n", &str1, str1);
	printf("str2: %p %s\n", &str2, str2);
	printf("str3: %p %s\n", &str3, str3);
	ft_strupcase(str1);
	ft_strupcase(str2);
	ft_strupcase(str3);
	printf("str0: %p %s\n", ft_strupcase(str1), ft_strupcase(str1));
	printf("str1: %p %s\n", &str1,str1);
	printf("str2: %p %s\n", &str2,str2);
	printf("str3: %p %s\n", &str3,str3);
	return (0);
}
