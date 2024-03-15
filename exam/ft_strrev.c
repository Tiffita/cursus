#include <stdio.h>

char *ft_strrev(char *str) {

    if (str == NULL || *str == '\0') {
        return str;
    }
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    char *start = str;
    char *end = str + length - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    // Retorna la cadena invertida
    return str;
}

int main(void)
{
	char s[] = "hello world";
	printf("%s\n", ft_strrev(s));
	return (0);
}
