/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaxine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 21:47:55 by hmaxine           #+#    #+#             */
/*   Updated: 2021/08/23 10:48:07 by hmaxine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>


int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0') && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
int main()
{
	char s1[10] = "12387";
	char s2[10] = "12398";
	printf("%d\n", strncmp(s1, s2, 4));
	printf("%d", ft_strncmp(s1, s2, 4));
}
