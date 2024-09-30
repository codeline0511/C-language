#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define _SEC_PER_MINUTE 60

int main(void) {
	int input, hour, minute, second;
	int left_time;

	printf("초를 입력하시오:");
	scanf("%d", &input);

	hour = input / (_SEC_PER_MINUTE * 60);
	left_time = input % (_SEC_PER_MINUTE * 60);
	minute = left_time / _SEC_PER_MINUTE;
	second = left_time % _SEC_PER_MINUTE;

	printf("%d초는 %d시간 %d분 %d초 입니다.\n", input, hour, minute, second);

	return 0;
}
//과제1 
