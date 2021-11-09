/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarmier <lmarmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:06:28 by lmarmier          #+#    #+#             */
/*   Updated: 2021/11/09 11:00:00 by lmarmier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, int n)
{
	int					i;
	unsigned char		*dstcpy;
	const unsigned char	*srccpy;

	i = 0;
	dstcpy = dst;
	srccpy = src;
	while (i < n && i < (int)ft_strlen(dst))
	{
		dstcpy[i] = srccpy[i];
		i++;
	}
	return (dst);
}
