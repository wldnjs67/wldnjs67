//
//  main.c
//  sharkGame
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include "board.h"


// Number of players in the game
#define N_PLAYER            3

// Maximum length for player names
#define MAX_CHARNAME        200

// dice range (1~6)
#define MAX_DIE             6

// Player status definitions: 0 for live, 1 for die, 2 for end
#define PLAYERSTATUS_LIVE   0 
#define PLAYERSTATUS_DIE    1 
#define PLAYERSTATUS_END    2 

// Player-specific data: position, name, coin count, and status
int player_position[N_PLAYER];
char player_name[N_PLAYER][MAX_CHARNAME];
int player_coin[N_PLAYER];
int player_status[N_PLAYER];
char player_statusString[3][MAX_CHARNAME] = {"LIVE", "DIE", "END"};

// Function to roll a dice, returning a random value between 1 and MAX_DIE
int rolldie(void)
{
    return rand()%MAX_DIE+1;
}

// Function to display the game opening banner
void opening(void)
{
    printf("==============================================================\n");
    printf("==============================================================\n");
    printf("==========                SHARK GAME!!!                =======\n");
    printf("==============================================================\n");
    printf("==============================================================\n");
}

// Function to display the player's position on the board
void printPlayerPosition(int player)
{
	int i;
    for (i=0;i<N_BOARD;i++)
    {
        printf("|");
        if (player_position[player] == i)
            printf("%c", player_name[player][0]); // Display the first letter of the player's name
        else
        {
            if (board_getBoardStatus(i) == BOARDSTATUS_NOK) // Check board status
                printf("X"); // Mark as unsafe position (the place where sharks passed by)
            else
                printf(" "); // Empty space
        }
    }
    printf("|\n");
}

// Function to print the status of all players
void printPlayerStatus(void)
{
    int i;
    printf("player status ---\n");
    for (i=0;i<N_PLAYER;i++)
    {
        printf("%s : pos %i, coin %i, status %s\n", player_name[i], player_position[i], player_coin[i], player_statusString[player_status[i]]);
        printPlayerPosition(i); //display the player's position
    }
    printf("-----------------\n");
}

// Function to check if any player is in a dangerous position and mark them as dead
void checkDie(void)
{   
    int i;
    for (i = 0; i < N_PLAYER; i++)
    {
        if (player_status[i] == PLAYERSTATUS_LIVE && board_getBoardStatus(player_position[i]) == BOARDSTATUS_NOK)
        {
           printf("%s in pos %i has died!! (coin %i)\n", player_name[i], player_position[i], player_coin[i]);
            player_status[i] = PLAYERSTATUS_DIE;
        }
    }
}

// Function to end this game
int game_end(void)
{
	int i;
	int flag_end=1;
	
	//if all the players are died?
	for (i=0;i<N_PLAYER;i++)
	{
		if (player_status[i]==PLAYERSTATUS_LIVE)
		{
			flag_end=0;
			break;
		}
	}
	return flag_end;
}
// Function to know alive player 
int getAlivePlayer(void)
{
	int cnt=0;
	int i;
	for (i=0;i<N_PLAYER;i++)
	{
		if (player_status[i]==PLAYERSTATUS_END)
		  cnt++;
	}
	return cnt;
}
// Function to know who is winner
int getWinner(void)
{
	int winner=-1;
	int max_coin=-1;
	int i;
	
	for(i=0;i<N_PLAYER;i++)
	{
		if (player_coin[i]>max_coin)
		{
			max_coin=player_coin[i];
			winner = i;
		}
	}
	return winner;
}

//main flow of this game
int main() {
    
    int i;
    int turn=0;


    srand((unsigned)time(NULL)); // Initialize random seed
    opening(); // Display the game banner

    // Step 1: Initialization
    // Step 1-1: Initialize the board
    board_initBoard();

    // Step 1-2: Initialize players
    for (i=0;i<N_PLAYER;i++)
    {
        player_position[i] = 0; // Start position
        player_coin[i] = 0; // Initial coin count
        player_status[i] = PLAYERSTATUS_LIVE; // All players start as live
        printf("Player %i's name: ", i+1); // Prompt for player name
        scanf("%s", player_name[i]);
    }
  
    // Step 2: Game start, turn loop
    do {
        int dieResult; // Result of the dice roll
        int coinResult; // Coin result placeholder
        int dum; // Placeholder for input

        // Skip turn for dead or ended players
        if (player_status[turn] != PLAYERSTATUS_LIVE)
        {
            turn = (turn + 1) % N_PLAYER;
            continue;
        }

        // Step 2-1: Print the status of the board and players
    
        board_printBoardStatus();
        printPlayerStatus();

        // Step 2-2: Roll the dice

        printf("%s's turn!! ", player_name[turn]);
        printf("Press any key to roll a dice!\n");
        scanf("%d", &dum); // Wait for user input
        fflush(stdin);

        dieResult = rolldie(); // Roll the dice

        // Step 2-3: Move the player
        printf("Dice result: %d, %s moved to %d!\n", dieResult, player_name[turn], player_position[turn] + dieResult);

        // Move player
        player_position[turn] += dieResult;
        if (player_position[turn] >= N_BOARD)
        {
	      player_position[turn] = N_BOARD - 1; //stop in the last compartment
          player_status[turn] = PLAYERSTATUS_END;
          printf("%s has reached the end of the board!\n", player_name[turn]);
		  }

        // Collect coins
        int coin = board_getBoardCoin(player_position[turn]);
        if (coin > 0)
        {
            player_coin[turn] += coin;
            printf("-> Lucky! %s got %d coins!\n", player_name[turn], coin);
        }

        // Check if any player dies
        checkDie();

        // Shark moves after all players take a turn
        if (turn == N_PLAYER - 1)
        {
            printf("Shark moved to %d\n", board_stepShark());
        }

        turn = (turn + 1) % N_PLAYER;
    } while (!game_end()); //do-while 

    printf("GAME END!!\n");
    int winner = getWinner();
    if (winner != -1)
    {
        printf("%d players are alive! Winner is %s\n", getAlivePlayer(), player_name[winner]); //outputs for the number of players who survived and the winners.
    }
    else
    {
        printf("No winner. All players are dead.\n"); //
    }

    return 0;
}


