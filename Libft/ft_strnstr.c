/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:13:09 by israelfe          #+#    #+#             */
/*   Updated: 2024/12/11 16:13:10 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i = 0;
    size_t j;

    if (*needle == '\0')
        return ((char *)haystack);
    while (haystack[i] && i < len)
    {
        j = 0;
        while (haystack[i + j] && needle[j] &&
               haystack[i + j] == needle[j] && (i + j) < len)
        {
            j++;
        }
        if (needle[j] == '\0')
            return ((char *)&haystack[i]);
        i++;
    }
    return (NULL);
}