#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int upper_range(int array[], int size);
int binary_range(int array[], int size);

int main(void) {
	srand((unsigned)time(NULL));

	int array[SIZE] = { 0 };

	make_array(array, SIZE);

	upper_range(array, SIZE);

	binary_range(array, SIZE);

	return 0;
}

int make_array(int array[], int size) // 배열 생성-난수 이용
{
	int used[51] = { 0 };

	for (int i = 0; i < SIZE; i++) // 배열에서 중복되는 수 없이 생성할 수 있는 코드
	{
		int num;
		do
		{
			num = rand() % 50 + 1;
		} while (used[num]);

		array[i] = num;
		used[num] = 1;
	}

	printf("배열 생성:");
	for (int i = 0;i < SIZE;i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n\n");
}

int upper_range(int array[], int size) // 오름순차 탐색
{
	int temp, least;

	for (int i = 0; i < size - 1;i++)
	{
		least = i;

		for (int j = i + 1; j < size; j++)
		{
			if (array[j] < array[least])
			{
				least = j;
			}
		}

		temp = array[i];
		array[i] = array[least];
		array[least] = temp;
	}

	printf("오름차순 배열:");
	for (int i = 0;i < SIZE;i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n\n");

	return -1;
}

int binary_range(int array[], int size) // 이진 탐색
{
	int key, low, high, middle;

	printf("찾고자 하는 숫자를 입력하세요: ");
	scanf("%d", &key);
	printf("\n");

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		printf("[%d %d]", low, high);
		middle = (low + high) / 2;

		if (key == array[middle])
		{
			printf("숫자를 발견했습니다! 위치:%d\n", middle);
			return middle;
		}
		else if (key > array[middle])
		{
			low = middle + 1;
		}
		else 
		{
			high = middle - 1;
		}
	}

	printf("입력하신 숫자 %d는 배열에 없습니다.\n", key);
	return -1;
}

