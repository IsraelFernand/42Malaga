/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:12:36 by israelfe          #+#    #+#             */
/*   Updated: 2024/12/11 16:12:37 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *s = (const unsigned char *)src;

    if (!dst && !src)
        return (NULL);
    if (d > s)
    {
        d += len;
        s += len;
        while (len--)
            *(--d) = *(--s);
    }
    else
    {
        while (len--)
            *d++ = *s++;
    }
    return (dst);
}