/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arranz <arranz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:55:30 by arranz            #+#    #+#             */
/*   Updated: 2023/04/26 13:21:44 by arranz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void *memchr(const void *s, int c, size_t n)
{
	const char *s1;
	int	i;
	
	s1 = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (s1[i] == c)
			return (s1[i]);
		i++;
	}
		
}
