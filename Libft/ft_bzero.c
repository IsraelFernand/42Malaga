/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:12:11 by israelfe          #+#    #+#             */
/*   Updated: 2024/12/11 16:42:08 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void ft_bzero(void *s, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;
    while (n--)
    {
        *ptr++ = 0;
    }
}