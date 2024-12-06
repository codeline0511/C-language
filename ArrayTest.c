#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

void array(int array[], int size);
int addOne(int x);

int main(void)
{
	int score[SIZE] = { 50, 50, 50, 50, 50 };
	score[0] = 10;

	for (int i = 0;i < SIZE;i++)
	{
		printf("%d ", score[i]);
	}

	printf("\n");

	array(score, SIZE); // 배열은 주소를 참조하기 때문에 원본 배열의 값도 바뀜

	for (int i = 0;i < SIZE;i++)
	{
		printf("%d ", score[i]);
	}

	printf("\n");

	int i = 0;

	printf("i의 값:%d\n", i);
	i = addOne(i);

	printf("i의 값:%d\n", i);
	i = addOne(i);

	printf("i의 값:%d\n", i);
}

void array(int array[], int size) // 배열의 값을 바꾸고 싶진 않을 땐 const 사용
{
	srand((unsigned)time(NULL));
	for (int i = 0;i < size;i++)
	{
		array[i] = 10;
	}
}

int addOne(int x)
{
	int add = 0;
	static int try = 0;

	try++;
	printf("무의미한 수:%d\n", add); // 지역 변수는 지역 함수 사용 후 값이 사라짐
	add++;
	printf("더한 횟수:%d\n", try); // 정적 지역 변수는 지역 함수 내에서 값이 유지 됌, 단 전역에서는 사용 불가
	return x + 1;
}