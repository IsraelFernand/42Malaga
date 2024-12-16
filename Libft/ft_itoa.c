#include "libft.h"

static size_t count_words(const char *s, char c)
{
    size_t count = 0;
    int in_word = 0;

    while (*s)
    {
        if (*s != c && !in_word)
        {
            in_word = 1;
            count++;
        }
        else if (*s == c)
            in_word = 0;
        s++;
    }
    return (count);
}

static char *word_dup(const char *s, size_t start, size_t end)
{
    char *word;
    size_t i = 0;

    word = (char *)malloc(end - start + 1);
    if (!word)
        return (NULL);
    while (start < end)
        word[i++] = s[start++];
    word[i] = '\0';
    return (word);
}

char **ft_split(char const *s, char c)
{
    char **result;
    size_t i = 0, j = 0, word_start = 0;

    if (!s)
        return (NULL);
    result = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
    if (!result)
        return (NULL);
    while (s[i])
    {
        if (s[i] != c && word_start == (size_t)-1)
            word_start = i;
        else if ((s[i] == c || s[i + 1] == '\0') && word_start != (size_t)-1)
        {
            result[j++] = word_dup(s, word_start, (s[i] == c) ? i : i + 1);
            word_start = (size_t)-1;
        }
        i++;
    }
    result[j] = NULL;
    return (result);
}
