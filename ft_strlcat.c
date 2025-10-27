/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapohlen <rapohlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 13:31:33 by rapohlen          #+#    #+#             */
/*   Updated: 2025/10/06 13:44:43 by rapohlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t n)
{
	size_t	i;
	size_t	l;

	if (!d || !s)
		return (0);
	l = ft_strlen(s);
	i = 0;
	while (i < n && d[i])
		i++;
	if (i == n)
		return (l + i);
	while (i + 1 < n && s[i])
		d[i] = s[i];
	d[i] = 0;
	return (l + i);
}
