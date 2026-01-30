#include <stdio.h>

int main() {
    int age;
    char name[50];

    printf("나이를 입력하세요: ");
    scanf("%d", &age);

    printf("이름을 입력하세요: ");
    scanf("%s", name);

    printf("\n당신의 나이는 %d살이고 이름은 '%s' 입니다.\n", age, name);

    return 0;
}