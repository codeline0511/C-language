#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void shape(int);
void random_number(void);
float f_a(float, float, float);
float f_b(float, float, float);

int n;

int main(void) {
    scanf("%d", &n);
    shape(n);
    random_number();
    shape(n);
    
    float f1 = f_a(7, -8, 1);
    float f2 = f_b(7, -8, 1);
    printf("%.2f %.2f", f1, f2);

    return 0;
}

void shape(int n){
    for(int i=0;i<n;i++){
        printf("ㅡ");
    }
    printf("\n");
}

void random_number(void){
    int random_number;
    
    srand((unsigned)time(NULL));
    random_number = rand() % 45 + 1;

    for(int i=0;i<6;i++){
        printf("%d ", random_number);
        random_number = rand() % 45 + 1;
    }
    printf("\n");
}

float f_a(float a, float b, float c){
    float f_1;
    f_1 = (-b + sqrt(b * b - (4 * a * c))) / (2 * a);

    return f_1;
}

float f_b(float a, float b, float c){
    float f_2;
    f_2 = (-b - sqrt(b * b - (4 * a * c))) / (2 * a);

    return f_2;
}













