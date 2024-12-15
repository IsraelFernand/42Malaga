/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:12:50 by israelfe          #+#    #+#             */
/*   Updated: 2024/12/11 16:12:51 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t d_len = 0;
    size_t s_len = 0;

    while (dst[d_len] && d_len < dstsize)
        d_len++;
    while (src[s_len])
        s_len++;
    if (d_len == dstsize)
        return (dstsize + s_len);
    size_t i = 0;
    while (src[i] && (d_len + i) < dstsize - 1)
    {
        dst[d_len + i] = src[i];
        i++;
    }
    dst[d_len + i] = '\0';
    return (d_len + s_len);
}
