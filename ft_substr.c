/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 14:25:35 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/09/13 22:55:08 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	strlen;
	char	*substr;

	strlen = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start > strlen)
		return (ft_strdup(""));
	if (strlen - start >= len)
		substr = (char *)malloc(sizeof(char) * (len + 1));
	else
		substr = (char *)malloc((strlen - start + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, (s + start), (len + 1));
	return (substr);
}
