#include <stdio.h>

int main() {
    char str[] = "PHAN THUAN THANH PTIT";
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            count++;
        }
    }
    printf("So ky tu la chu cai : %d\n", count);

    return 0;
}

