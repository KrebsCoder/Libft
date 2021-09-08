/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:35:53 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/09/06 21:48:42 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t    i;

    i = 0;
    if (dest > src)
    {
        while (n > 0)
        {
            ((char *)dest)[n - 1] = ((char *)src)[n - 1];
            n--;
        }
    }
    else
    {
        while (n > 0)
        {
            ((char *)dest)[i] = ((char *)src)[i];
            n--;
            i++;
        }
    }
    return (dest);
}