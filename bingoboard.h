#define N_LINE 2
#define N_SIZE 5//���� ũ�� 
#define BINGO_NUMSTATUS_ABSENT -1
#define BINGO_NUMSTATUS_PRESENT 0





void bingo_init(void); //���� ����

void bingo_print(void);

void bingo_inputNum(int sel);

int bingo_countCompletedLine(void); //�ϼ��� �� �� ���  

int bingo_checkNum(int selNum);
