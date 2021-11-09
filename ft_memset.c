/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarmier <lmarmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:48:07 by lmarmier          #+#    #+#             */
/*   Updated: 2021/11/02 14:43:23 by lmarmier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, int len)
{
	int				i;
	unsigned char	*str2;

	str2 = str;
	i = 0;
	while (i < len)
	{
		str2[i] = (unsigned char)c;
		i++;
	}
	str2[i] = 0;
	return (str);
}
