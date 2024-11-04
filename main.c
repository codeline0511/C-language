#include <stdio.h>

int main() {
    int num;
    int n;
    int sum = 0;
    while(num == 0){
        printf("원하는 수 입력:\n");
        scanf("%d", &num);
    }

    while (num > 0) {
        sum += num % 10;
        num /= 10;       
    }

    printf("모든 자리의 수의 합:%d", sum);

    return 0;

}