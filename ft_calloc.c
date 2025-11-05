/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapohlen <rapohlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:10:32 by rapohlen          #+#    #+#             */
/*   Updated: 2025/11/05 17:50:39 by rapohlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*new;

	if (!n || !size)
		return (malloc(0));
	if (n > SIZE_MAX / size)
		return (NULL);
	new = malloc(n * size);
	if (!new)
		return (new);
	ft_bzero(new, n * size);
	return (new);
}
