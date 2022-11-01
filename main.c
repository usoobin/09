#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i;
	int a[SIZE] = {1,2,3,4,5};
	int b[SIZE] = {1,2,3,4,5};
	int flag = 1;  //이벤트가 발생하면 1 아니면 0 

	for (i=0; i<SIZE; i++)
	{
		if (a[i] != b[i])
		{
			flag = 1; 
			printf("배열값이 같은 값을 가집니다\n");
			break; // 5개중 같은게 없을경우 나감 
		}
		
	}
	if(flag == 0 )
	{
		printf("배열값이 같은 값을 가집니다\n");
	}

	
	return 0;
}
