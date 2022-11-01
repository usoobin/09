#include <stdio.h>
#define ROWS 3
#define COLS 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void addMatrx(int A[][COLS], int B[][COLS], int C[][COLS]);
void printMatrx(int A[][COLS]);


int main(int argc, char *argv[]) 
{
	int A[ROWS][COLS] = {
		{2,3,0},
		{8,9,1},
		{7,0,5}};

	int B[ROWS][COLS] = {
		{1,0,0},
		{0,1,0},
		{0,0,1}};

	int C[ROWS][COLS];
	
	addMatrx(A,B,C);
	printMatrx(C);
	
	return 0;
}


	void addMatrx(int A[][COLS],int B[][COLS],int C[][COLS])
	{
		int i,j;
	
		for(j=0; j<ROWS; j++)
		{
		 
		for(i=0; i<COLS; i++)
		{ 
			C[j][i] = A[j][i] + B[j][i]; 
		}
	}
	}

	void printMatrx(int A[][COLS])
	{			
		int i,j;
		
		for(j=0; j<ROWS; j++)
		{

		for(i=0; i<COLS; i++)
		{
			printf("%3d", A[j][i]);
		}
		
		printf("\n");
	}
	}
