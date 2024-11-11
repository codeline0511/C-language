#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int max(int, int);
int min(int, int);
int equal(int, int);

int main(void) {
    srand((unsigned)time(NULL)); //seed random number time set
    int n = rand() % 100; //random number in value INT % N
    
    printf("%d\n", max(10, 20));
    printf("%d\n", min(10, 20));
    printf("%d\n", equal(10, 20));
    printf("%d\n", n);
    return 0; 
}

int max(int x, int y){
    return (x < y) ? y : x;
}

int min(int x, int y){
    return (x < y) ? x : y;
}

int equal(int x, int y){
    return x == y;
}