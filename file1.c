#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float light_speed, distance, time;

	light_speed = 300000;
	distance = 149600000;

	time = distance / light_speed;

	printf("���� �ӵ��� %.3fkm/s\n", light_speed);
	printf("�¾�� �������� �Ÿ� %.3fkm\n", distance);
	printf("���� �ð��� %.3f��\n", time);

	system("pause");
	return 0;
}