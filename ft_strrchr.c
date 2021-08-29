/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:36:41 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/08/29 14:55:42 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *string, int c)
{
	int	i;

	i = 0;
	while (*string != '\0')
	{
		string++;
	}
	while (*string <= string[0])
	{
		if (*string == c)
		{
			return ((char *) string);
		}
		string--;
	}
	return (NULL);
}
