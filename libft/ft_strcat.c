/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufranco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:36:55 by lufranco          #+#    #+#             */
/*   Updated: 2017/11/09 16:20:13 by lufranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int a;

	i = 0;
	a = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[a] != '\0')
	{
		s1[i] = s2[a];
		i++;
		a++;
	}
	s1[i] = '\0';
	return (s1);
}
