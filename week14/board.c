//
//  board.c
//  sharkGame
//

#include "board.h" //header file

// ----- EX. 3 : board ------------
#define N_COINPOS       12
#define MAX_COIN        4

// ----- EX. 5 : shark ------------
#define MAX_SHARKSTEP   6
#define SHARK_INITPOS   -4

// ----- EX. 3 : board ------------
static int board_coin[N_BOARD];
static int board_status[N_BOARD]; //0 - OK, 1 - destroyed

static int shark_position; //define shark's position

// ----- EX. 3 : board ------------
void board_printBoardStatus(void)
{    
    int i;
    printf("----------------------- BOARD STATUS -----------------------\n");
    for (i=0;i<N_BOARD;i++) 
    {
        printf("|");
        if (board_status[i] == BOARDSTATUS_NOK)
            printf("X");
        else
            printf("O");
    }
    printf("|\n");
    printf("------------------------------------------------------------\n");
}

int board_initBoard(void) //board initialization
{
    int i;
    //variable initialization
    for (i=0;i<N_BOARD;i++)
    {
        board_status[i] = BOARDSTATUS_OK;
        board_coin[i] = 0;
    }
    //coin allocation
    for (i=0; i < N_COINPOS; i++)
    {
        int pos;
        do {
            pos = rand() % N_BOARD; // Random position
        } while (board_coin[pos] != 0); // Ensure no duplicate coin positions

        board_coin[pos] = 1 + (rand() % MAX_COIN); // Random coin value (1~4)
    }

// ----- EX. 5 : shark ------------
    shark_position = SHARK_INITPOS;     // Initialize shark position
// ----- EX. 5 : shark ------------
    return N_COINPOS;
}


// ----- EX. 5 : shark ------------
int board_stepShark(void)
{
	int i;
    int step = 1 + (rand() % MAX_SHARKSTEP); // Random step size (1~6)
    for (i=0;i<step;i++)
    {
      shark_position = (shark_position + 1) % N_BOARD; // Move shark one step
      board_status[shark_position] = BOARDSTATUS_NOK;  // Mark position as destroyed
    }
	return shark_position;
}

// ----- EX. 5 : shark ------------


// ----- EX. 3 : board ------------
int board_getBoardStatus(int pos)
{
    return board_status[pos];
}

int board_getBoardCoin(int pos)
{
    int coin = board_coin[pos];
    board_coin[pos] = 0;
    return coin;
}
// ----- EX. 3 : board ------------
