/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarmier <lmarmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:04:45 by lmarmier          #+#    #+#             */
/*   Updated: 2021/11/09 12:50:46 by lmarmier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dst, const void *src, size_t len)
{
	int					i;
	unsigned char		*dst2;
	const unsigned char	*src2;

	dst2 = dst;
	src2 = src;
	i = 0;
	while (i < (int)len)
	{
		dst2[i] = src2[i];
		i++;
	}
	dst2[i] = 0;
	return (dst);
}
