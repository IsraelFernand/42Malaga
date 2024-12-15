#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *joined;
    size_t len_s1;
    size_t len_s2;
    size_t i;

    if (!s1 || !s2)
        return (NULL);
    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    joined = (char *)malloc(len_s1 + len_s2 + 1);
    if (!joined)
        return (NULL);
    i = 0;
    while (i < len_s1)
    {
        joined[i] = s1[i];
        i++;
    }
    i = 0;
    while (i < len_s2)
    {
        joined[len_s1 + i] = s2[i];
        i++;
    }
    joined[len_s1 + len_s2] = '\0';
    return (joined);
}