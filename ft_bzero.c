/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapohlen <rapohlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 01:22:43 by rapohlen          #+#    #+#             */
/*   Updated: 2025/11/04 11:54:40 by rapohlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*array;
	size_t	i;

	if (!s)
		return ;
	array = (char *)s;
	i = 0;
	while (i < n)
	{
		array[i] = 0;
		i++;
	}
}
