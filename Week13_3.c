#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
	int list[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 };
	int i, j, temp, more;

	for(i = 0; i < SIZE-1; i++)
	{ 
		more = i; 
		for(j = i + 1; j < SIZE; j++) 
			if(list[j] > list[more])
				more = j;

		temp = list[i]; 
		list[i] = list[more];
		list[more] = temp;
	}
    for(i = 0;i < SIZE; i++)
		printf("%d ", list[i]); 

	printf("\n");
	return 0;
} 
