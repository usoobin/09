#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i;
	int score[SIZE];
	int grade[SIZE];
	

	for (i=0;i<SIZE;i++)
	{
		grade[i] = rand() % 100;
		score[i] = grade[i];
	}

	for (i=0; i<SIZE; i++)
	{
		printf("score[%d] = %d\n",i,score[i]);
	}

	
	return 0;
}
