#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float light_speed, distance, time;

	light_speed = 300000;
	distance = 149600000;

	time = distance / light_speed;

	printf("빛의 속도는 %.3fkm/s\n", light_speed);
	printf("태양과 지구와의 거리 %.3fkm\n", distance);
	printf("도달 시간은 %.3f초\n", time);

	system("pause");
	return 0;
}