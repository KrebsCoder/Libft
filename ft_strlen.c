/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:35:00 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/08/25 13:55:53 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strlen(const char *string)
{
	unsigned long	i;

	i = 0;	
	while (string[i] != '\0')
	{
		i++;
	}
	return(i);
}

int main(void)
{
	char *string;
	int Counter;

	string = "Hello World!";
	Counter = ft_strlen(string);
	printf("%d", Counter);
	return 0;
}
