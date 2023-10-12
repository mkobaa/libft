
#include "../include/libft.h"
#include <stdio.h>



size_t	ft_strlen(const char *s);

int main(void)
{
    char *h;
    h = "hello world!";
    printf("%zu", ft_strlen(h));  // Note: %zu is the correct format specifier for size_t
}
