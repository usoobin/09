#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i,avg;
	int sum;
	int grade[SIZE];
	
	sum = 0;
	for (i=0;i<SIZE;i++)
	{
		printf("5���� ������ �Է��ϼ���\n");
		scanf("%d", &grade[i]);
		sum += grade[i];
	}

	avg = sum / SIZE;
	printf("������� : %d\n",avg);

	
	return 0;
}
