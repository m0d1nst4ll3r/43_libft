/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapohlen <rapohlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 01:33:50 by rapohlen          #+#    #+#             */
/*   Updated: 2025/10/07 20:29:29 by rapohlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	char	*dest;
	char	*src;

	if (!d || !s || !n)
		return (d);
	if (d < s)
		return (ft_memcpy(d, s, n));
	dest = (char *)d;
	src = (char *)s;
	while (n > 0)
	{
		n--;
		dest[n] = src[n];
	}
	return (d);
}
