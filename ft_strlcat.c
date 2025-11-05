/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapohlen <rapohlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 13:31:33 by rapohlen          #+#    #+#             */
/*   Updated: 2025/11/05 15:22:29 by rapohlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	l;

	if (!d || !s)
		return (0);
	l = ft_strlen(s);
	i = 0;
	while (i < n && d[i])
		i++;
	if (i == n)
		return (l + i);
	j = 0;
	while (i + j + 1 < n && s[j])
	{
		d[i + j] = s[j];
		j++;
	}
	d[i + j] = 0;
	return (l + i);
}
