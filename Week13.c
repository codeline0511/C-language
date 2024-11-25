#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define SIZE 70

void add(long long a[], int);
void printArray(long long a[], int);

int main(void) {
    srand((unsigned)time(NULL));

    long long fibonacci[SIZE] = {1, 1};

    add(fibonacci, SIZE); //배열은 주소를 참조하기 때문에 전역 변수와 같은 현상을 보임

    printArray(fibonacci, SIZE);

    printf("%ld", sizeof(fibonacci)); //long long형은 8비트 할당, int형은 4비트 할당

    return 0;
}

void add(long long a[], int size){
    for (int i=2;i<size;i++){
        a[i] = a[i-1] + a[i-2];
    }
}

void printArray(long long a[], int size){
    for (int i=0;i<SIZE;i++){
        printf("%d번째 수:%lld\n", i+1, a[i]);
    }
}
