#include <stdio.h>
#include "bingoBoard.h"

#define BINGONUM_HOLE 0//���� ������ ���ڸ� �������� �뵵 


static int bingoBoard[N_SIZE][N_SIZE];
static int numberStatus[N_SIZE*N_SIZE];


void bingo_init(void) //���� ����
{
	int i, j;
	int cnt = 1;
	
	for(i=0;i<N_SIZE;i++)
	    for(j=0;j<N_SIZE;j++)
	    {
	    	if (cnt ==15)
			{
				bingoBoard[i][j] = BINGONUM_HOLE;
				numberStatus[cnt-1] = BINGONUM_HOLE;

				
				cnt++;
				
			}
			else
			   numberStatus[cnt-1] = i*N_SIZE + j;
			   bingoBoard[i][j] = cnt++; 
		}
	{
		bingoBoard[i][j] = cnt++;
	}
	
}

void bingo_print(void)
{
	int i, j;
	
	printf("========================\n");
	for (i=0; i<N_SIZE; i++){
		for (j=0; j<N_SIZE; j++){
			if (bingoBoard[i][j]== BINGONUM_HOLE)
			  printf("%X\t");
			else
			  printf("%i\t", bingoBoard[i][j]);
			  
		}
		printf("\n");
		
	}
	printf("=============================\n\n");
	
}

void bingo_inputNum(int sel)
{
	
}

int bingo_countCompletedLine(void) //�ϼ��� �� �� ���  
{
	
}
