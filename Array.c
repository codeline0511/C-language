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

int make_array(int array[], int size) // �迭 ����-���� �̿�
{
	int used[51] = { 0 };

	for (int i = 0; i < SIZE; i++) // �迭���� �ߺ��Ǵ� �� ���� ������ �� �ִ� �ڵ�
	{
		int num;
		do
		{
			num = rand() % 50 + 1;
		} while (used[num]);

		array[i] = num;
		used[num] = 1;
	}

	printf("�迭 ����:");
	for (int i = 0;i < SIZE;i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n\n");
}

int upper_range(int array[], int size) // �������� Ž��
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

	printf("�������� �迭:");
	for (int i = 0;i < SIZE;i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n\n");

	return -1;
}

int binary_range(int array[], int size) // ���� Ž��
{
	int key, low, high, middle;

	printf("ã���� �ϴ� ���ڸ� �Է��ϼ���: ");
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
			printf("���ڸ� �߰��߽��ϴ�! ��ġ:%d\n", middle);
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

	printf("�Է��Ͻ� ���� %d�� �迭�� �����ϴ�.\n", key);
	return -1;
}

