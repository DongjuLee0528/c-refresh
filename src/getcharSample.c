//
// Created by Dongju Lee on 2026. 1. 16..
//
#include <stdio.h>
int main(void) {
    char ch = 0;// 변수 선언 +정의

    ch = getchar(); //getchar '해석' 한 글자를 가지고 와라
    putchar(ch); //putchar '해석' 값이 저장된 메모리 값을 읽거나 출력
    putchar('Z');

    return 0;
}