//
// Created by Dongju Lee on 2026. 1. 20..
//
#include <stdio.h>

int main() {
    int x =10;

    putchar('B');
    putchar('\n');
    printf("%c\n", 'A');
    printf("%c\n", 65);// 아스키코드 65 = A

    printf("x는 %d 입니다.\n \a",x);

    printf("%8d\n", 1234);
    printf("%08d\n", 1234);
    return 0;

}