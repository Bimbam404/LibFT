/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarmier <lmarmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:47:28 by lmarmier          #+#    #+#             */
/*   Updated: 2021/11/02 15:01:12 by lmarmier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *str, int len)
{
	int				i;
	unsigned char	*str2;

	str2 = str;
	i = 0;
	while (i < len)
	{
		str2[i] = 0;
		i++;
	}
	return (0);
}
