//
// Created by Dongju Lee on 2026. 5. 5..
//
#include <stdio.h>
int main(void) {
    int a =0;
    int b =0;
    int avg =0;

    printf("두 수를 입력해주세요. EX) 2 5 :");
    scanf("%d %d", &a ,&b);

    avg = (a + b) / 2;

    printf("두 수의 평균 값은 %d 입니다",avg);
    return 0;

}