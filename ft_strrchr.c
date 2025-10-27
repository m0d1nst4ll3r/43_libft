/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapohlen <rapohlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:00:41 by rapohlen          #+#    #+#             */
/*   Updated: 2025/10/06 14:05:34 by rapohlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	if (!s)
		return (NULL);
	p = NULL;
	while (*s++)
		if (*(s - 1) == c)
			p = (char *)(s - 1);
	if (*(s - 1) == c)
		p = (char *)(s - 1);
	return (p);
}
