/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:36:10 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/08/28 13:17:40 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isacii(int c)
{
	while (c != '\0')
	{
		if (c >= 0 && c <= 127)
			return (1);
	}
	return (0);
}
