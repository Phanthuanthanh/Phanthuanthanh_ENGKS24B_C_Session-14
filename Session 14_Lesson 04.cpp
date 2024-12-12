#include <stdio.h>

int main() {

    char str[] = "PHAN THUAN THANH";
    char ch;
    int count = 0;

    printf("Nhap vao 1 ky tu bat ky: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.", ch, count);

    return 0;
}

