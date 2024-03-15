#include <stdio.h>

int simple_atoi(const char *str) {
    int result = 0;
    while (*str) {
        result = result * 10 + (*str - '0');
        str++;
    }
    return result;
}

int main() {
    const char *str = "2147483647";
    int num = simple_atoi(str);
    printf("Número convertido: %d\n", num);
    return 0;
}
