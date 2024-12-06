//
//  board.h
//  sharkGame
//


#ifndef board_h
#define board_h

#include <stdio.h>
#include <stdlib.h>

// ----- EX. 3 : board ------------
#define N_BOARD                 20

//0 - OK, 1 - destroyed
#define BOARDSTATUS_NOK          1
#define BOARDSTATUS_OK           0

int board_initBoard(void); //initialize board
int board_getBoardStatus(int pos); //print status 
int board_getSharkPosition(void); //shark's position
int board_stepShark(void); //shark's step
int board_getBoardCoin(int pos); //get coin
void board_printBoardStatus(void); //all board's status
// ----- EX. 3 : board ------------
#endif /* board_h */

