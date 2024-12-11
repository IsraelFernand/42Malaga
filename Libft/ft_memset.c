/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:12:41 by israelfe          #+#    #+#             */
/*   Updated: 2024/12/11 16:34:50 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;
    while (n--)
    {
        *ptr++ = (unsigned char)c;
    }
    return s; 
}