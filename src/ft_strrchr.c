/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hp-mohamed <hp-mohamed@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 01:16:58 by hp-mohamed        #+#    #+#             */
/*   Updated: 2023/10/13 02:35:35 by hp-mohamed       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stddef.h>
#include <stdio.h>

char    *ft_strrchr(const char *s, int c)
{
    size_t i;

    i = ft_strlen(s);
    while (i >= 0)
    {
        if(s[i] == c)
        {
            return ((char *)(&s[i]));
        }
        i--;
    }
    return 0;
}

#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *str, int character);

int main() {
    // Test 1: Basic test cases
    const char *str1 = "Hello, world!";
    char character1 = 'o';
    char *result1 = ft_strrchr(str1, character1);
    char *result1_official = strrchr(str1, character1);
    printf("Test 1 - Custom: %s, Official: %s\n", result1, result1_official);
    
    const char *str2 = "Hello, world!";
    char character2 = 'z';
    char *result2 = ft_strrchr(str2, character2);
    char *result2_official = strrchr(str2, character2);
    printf("Test 2 - Custom: %p, Official: %p\n", (void *)result2, (void *)result2_official);

    // Test 2: Edge cases
    const char *str3 = "";
    char character3 = 'a';
    char *result3 = ft_strrchr(str3, character3);
    char *result3_official = strrchr(str3, character3);
    printf("Test 3 - Custom: %p, Official: %p\n", (void *)result3, (void *)result3_official);

    const char *str4 = "A";
    char character4 = 'A';
    char *result4 = ft_strrchr(str4, character4);
    char *result4_official = strrchr(str4, character4);
    printf("Test 4 - Custom: %s, Official: %s\n", result4, result4_official);

    const char *str5 = "A";
    char character5 = 'B';
    char *result5 = ft_strrchr(str5, character5);
    char *result5_official = strrchr(str5, character5);
    printf("Test 5 - Custom: %p, Official: %p\n", (void *)result5, (void *)result5_official);

    // Test 3: Multiple occurrences
    const char *str6 = "OpenAI is amazing!";
    char character6 = 'a';
    char *result6 = ft_strrchr(str6, character6);
    char *result6_official = strrchr(str6, character6);
    printf("Test 6 - Custom: %s, Official: %s\n", result6, result6_official);

    const char *str7 = "   Multiple   spaces   ";
    char character7 = ' ';
    char *result7 = ft_strrchr(str7, character7);
    char *result7_official = strrchr(str7, character7);
    printf("Test 7 - Custom: %s, Official: %s\n", result7, result7_official);

    // Test 4: Special characters
    const char *str8 = "Special characters: ~!@#$%^&*()";
    char character8 = ':';
    char *result8 = ft_strrchr(str8, character8);
    char *result8_official = strrchr(str8, character8);
    printf("Test 8 - Custom: %s, Official: %s\n", result8, result8_official);

    const char *str9 = "This\0is\0a\0test";
    char character9 = '\0';
    char *result9 = ft_strrchr(str9, character9);
    char *result9_official = strrchr(str9, character9);
    printf("Test 9 - Custom: %s, Official: %s\n", result9, result9_official);

    // Test 5: Performance and large strings
    const char *str10 = "This is a very long string...";
    char character10 = 'r';
    char *result10 = ft_strrchr(str10, character10);
    char *result10_official = strrchr(str10, character10);
    printf("Test 10 - Custom: %s, Official: %s\n", result10, result10_official);

    return 0;
}
