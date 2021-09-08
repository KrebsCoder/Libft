/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:35:58 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/09/01 20:56:22 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t lenght)
{
	char	*dst;
	char	*source;

	dst = (char *)dest;
	source = (char *)src;
	while (lenght--)
	{
		*dst++ = *source++;
	}
	return (dest);
}
