/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapohlen <rapohlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 09:49:16 by rapohlen          #+#    #+#             */
/*   Updated: 2025/10/27 22:47:47 by rapohlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s, const char *set)
{
	char	*new;
	size_t	start;
	size_t	end;

	if (!s || !set)
		return (NULL);
	start = 0;
	while (s[start] && ft_strchr(set, s[start]))
		start++;
	if (s[start])
	{
		end = ft_strlen(s + start) + start;
		while (ft_strchr(set, s[end - 1]))
			end--;
	}
	else
		end = start;
	new = ft_substr(s, (unsigned int)start, end - start);
	return (new);
}
