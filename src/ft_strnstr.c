#include <stddef.h>
#include "../include/libft.h"

char    *ft_strnstr(const char *str, const char *search, size_t n)
{
    unsigned int i; //initialize 0 to str
    unsigned int j; //initialize 0 to search
    unsigned int len;

    i = 0;
    len = ft_strlen(search);

    while ((str[i] != 0) && (i < n))
    {
        j = 0;
        while (j < len)
        {
            if (str[i + j] == search[j])
            {
                j++;
            }
            else
            {
                j = 0;
                break;
            }
        }
        if (len == j)
        {
            return ((char *)(&str[i]));
        }
        i++;
    }
    return NULL;
}