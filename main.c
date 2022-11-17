#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	srand((unsigned) time(NULL)); //랜덤함수  
	
	
	//opening
	printf("=====================================\n");
	printf("*************************************\n");
	printf("            bingo game               \n");
	printf("*************************************\n");	
	printf("=====================================\n\n\n");
	
	
	//game
	bingo_init();
	bingo_print();
	bingo_inputNum(21);
	bingo_print();
	
	//initialize bingo board
	/*
	while(game is not end)  // 줄 수가 N_BINGO 보다 작음  
	{
	   //bingo board print
	   .
	   //print np. of completed line  
	   .
	   //selct a number
	   .
	   //update the board status
    }
	*/
	
	//ending
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("=====================================\n");
	printf("*************************************\n");
    printf("           congratulation!!!         \n");
	printf("              BINgO!!!!!!!           \n");
	printf("             YOU winNN!!!!!          \n");
	printf("*************************************\n");
	printf("=====================================\n\n");
	
	
	return 0;
}
