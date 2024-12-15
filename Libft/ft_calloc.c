#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    if (count == 0 || size == 0)
        count = size = 1;
    if (size > SIZE_MAX / count)
        return (NULL);
    ptr = malloc(count * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, count * size);
    return (ptr);
}
