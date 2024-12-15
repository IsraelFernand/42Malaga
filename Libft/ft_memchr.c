/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:12:22 by israelfe          #+#    #+#             */
/*   Updated: 2024/12/11 16:12:23 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr = (const unsigned char *)s;

    while (n--)
    {
        if (*ptr == (unsigned char)c)
            return ((void *)ptr);
        ptr++;
    }
    return (NULL);
}