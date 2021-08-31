/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaxine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 21:59:00 by hmaxine           #+#    #+#             */
/*   Updated: 2021/08/23 11:11:27 by hmaxine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
char	*ft_strcat(char *dest, char *str)
{
	int	i;
	int	o;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	o = 0;
	while (str[o] != '\0')
	{
		dest[i] = str[o];
		i++;
		o++;
	}
	return (dest);
}
int main()
{
	char dest[11] = "Privet";
	char str[] = "123";
	printf("%s\n", ft_strcat(dest, str));
	printf("s", strcat(dest, str));
	return 0;
}
