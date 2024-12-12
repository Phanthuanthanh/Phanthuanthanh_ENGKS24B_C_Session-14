#include <stdio.h>

int main() {
    char str[50]; 
    printf("Nhap mot chuoi bat ky: ");

    scanf("%49[^\n]", str);

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    printf("Chuoi da nhap: %s\n", str);
    printf("Do dai cua chuoi: %d\n", length);

    return 0;
}

