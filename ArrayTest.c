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

	array(score, SIZE); // �迭�� �ּҸ� �����ϱ� ������ ���� �迭�� ���� �ٲ�

	for (int i = 0;i < SIZE;i++)
	{
		printf("%d ", score[i]);
	}

	printf("\n");

	int i = 0;

	printf("i�� ��:%d\n", i);
	i = addOne(i);

	printf("i�� ��:%d\n", i);
	i = addOne(i);

	printf("i�� ��:%d\n", i);
}

void array(int array[], int size) // �迭�� ���� �ٲٰ� ���� ���� �� const ���
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
	printf("���ǹ��� ��:%d\n", add); // ���� ������ ���� �Լ� ��� �� ���� �����
	add++;
	printf("���� Ƚ��:%d\n", try); // ���� ���� ������ ���� �Լ� ������ ���� ���� ��, �� ���������� ��� �Ұ�
	return x + 1;
}