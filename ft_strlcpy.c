/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapohlen <rapohlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 13:20:34 by rapohlen          #+#    #+#             */
/*   Updated: 2025/10/07 20:35:07 by rapohlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *d, const char *s, size_t n)
{
	size_t	i;

	if (!d || !s || !n)
		return (ft_strlen(s));
	i = 0;
	while (i < n && s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = 0;
	return (ft_strlen(s));
}
