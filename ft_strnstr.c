/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arranz <arranz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:03:59 by arranz            #+#    #+#             */
/*   Updated: 2023/05/02 11:23:32 by arranz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
   size_t  i;
   size_t  j;


   i = 0;
   if (needle[i] == '\0')
   {
       return ((char *)haystack);
   }
   while (haystack[i])
	{
		j = 0;
		while (haystack[i] == needle[j] && haystack[i] && i < len)
		{
			i++;
			j++;
		}
		if (!needle[j])
			return ((char *)&haystack[i - j]);
		i = (i - j) + 1;
	}
	return (0);
}

/*int main(void)
{
    char *s1 = "hola me llamo asier";
	char *s2 = "llamo";
	size_t n = 13;
	printf("%s \n",ft_strnstr(s1, s2, n));
}*/