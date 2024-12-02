#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int i;

    printf("%d\n", i); 
    printf("%p\n\n", &i); //int형은 4바이트를 사용하므로 4바이트만큼의 메모리 공간을 사용하여 주소를 생성

    int j;
    
    scanf("%d\n", &j);
    printf("%d\n", j);
    printf("%p\n\n", &j);

    int k = 20;
    int *pk = &k; //포인터 변수 선언 시 * 붙이기

    printf("%d\n", k);
    printf("%p\n", &k); //&연산자는 변수의 주소를 참조
    printf("%p\n", pk);
    printf("%d\n", *pk); //*연산자는 포인터 변수가 가리키는 값을 간접 참조

    *pk += 1; //*연산자를 통해 값을 변경 가능
    printf("%d\n\n", *pk);

    int *pl = NULL;
    printf("%p\n", pl); //pl 포인터 변수에 아무런 주소도 저장되어 있지 않음
    int l = 50;
    pl = &l;
    printf("%d\n", l);
    printf("%p\n", pl);
    return 0;
}