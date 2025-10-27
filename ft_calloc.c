/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapohlen <rapohlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:10:32 by rapohlen          #+#    #+#             */
/*   Updated: 2025/10/15 23:12:00 by rapohlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	i;
	char	*new;

	if (!n || !size || n > ULONG_MAX / size)
		return (NULL);
	new = malloc(n * size);
	if (!new)
		return (new);
	i = 0;
	while (i < n * size)
	{
		new[i] = 0;
		i++;
	}
	return (new);
}
