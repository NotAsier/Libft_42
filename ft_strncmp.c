/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arranz <arranz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:25:34 by arranz            #+#    #+#             */
/*   Updated: 2023/04/26 12:55:53 by arranz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include<stdio.h>*/

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if ((s1[i] < s2[i]) || (s1[i] > s2[i]))
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0); 
}

/*int main(void)
{
    char *s1 = "hola me llamo asier";
	char *s2 = "hola me llamo carlos";
	size_t n = 19;
	printf("%d",ft_strncmp(s1, s2, n));
}*/
