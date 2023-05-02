/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arranz <arranz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:43:33 by arranz            #+#    #+#             */
/*   Updated: 2023/05/02 11:20:14 by arranz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char* str) 
{
	long            res;
	long            sign;
	unsigned int    i;


   res = 0;
   sign = 1;
   i = 0;

   while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
       || str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
       i++;
   if (str[i] == '-' || str[i] == '+')
   {
       if (str[i] == '-')
           sign = -1;
       i++;
   }
   while (str[i] >= '0' && str[i] <= '9')
   {
       res = res * 10 + str[i] - '0';
       i++;
   }
   return ((int)(res * sign));
}

int main(void)
{
   char *s = " +98764987";
   printf("%d %d", ft_atoi(s), atoi(s));
   return (0);
}
