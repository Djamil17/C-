/*
Program: A tic tac program 
Author: Djamil Lakhdar-Hamina
Date: 11/25/2021

*/ 

#include <stdio.h>
#define X 'X'
#define O 'O'
#define GAME_ON 1
#define GAME_OFF 0
#define TRUE 1
#define FALSE 0 
#define PLAYER1 1
#define PLAYER2 2
#define ROWS 3
#define COLUMNS 3



typedef struct BOARD 
{ 

char board_value[ROWS][COLUMNS];

}  board ; 

struct BOARD ticTacToeBoard;

// =
// {
    
//     {BLANK,BLANK,BLANK},
//     {BLANK,BLANK,BLANK},
//     {BLANK,BLANK,BLANK}

// }; 


_Bool ticTacToe(int round, int player,_Bool game_state,struct BOARD board);
void enterValue(int player,struct BOARD board); 
void showBoard(struct BOARD board); 
_Bool checkState(struct BOARD board); 

_Bool ticTacToe(int round,int player,_Bool game_state,struct BOARD board){

    // ask for value 

    if (round%2==0){

        player=PLAYER1;
    } else {

        player=PLAYER2;

    }

    enterValue(player, board);
    showBoard(board);
    game_state=checkState(board);
    return game_state; 
 
}

void enterValue(int player,struct BOARD board){

    int row, col;
    char val;
    _Bool valid=TRUE;  

    while (valid==TRUE){ 

        printf("Player %d\n",player);
        printf("Enter Row Position (0-2):\n");
        scanf("%d",&row);
        printf("Enter Column Position (0-2):\n");
        scanf("%d",&col);
        printf("Enter Value (X or O):\n");
        scanf("%s",&val);
        printf("\nRow:%d\nCol:%d\nVal:%c\n\n",row,col,val);

        //loop add val at position 
        if ((row<ROWS && row>=0) && (col <COLUMNS && col>=0))
        {
            if ((player==PLAYER1) && (val==X))
            {

                 if (board.board_value[row][col]!=X || board.board_value[row][col]!=O){
                    board.board_value[row][col]=val;
                    printf("%c was added to row %d and column %d\n", board.board_value[row][col],row,col);
                    valid=FALSE;

                } else if (board.board_value[row][col]==X || board.board_value[row][col]==X){
                    printf("The value X is already in the row and col selected\n");
                }
            } else if ((player==PLAYER2) && (val==O)) 
            {   
                if (board.board_value[row][col]!=O || board.board_value[row][col]!=X){
                    board.board_value[row][col]=val;
                    printf("%c was added to row %d and column %d\n", board.board_value[row][col],row,col);
                    valid=FALSE;

                } else if (board.board_value[row][col]==O || board.board_value[row][col]==X){
                    printf("The value O is already in the row and col selected\n");
                }
            } else if ((player==PLAYER2) && (val!=O)) 
            
            {
                 printf("Player 2 can only use O, try again...\n");
                
            }
            else if ((player==PLAYER1) && (val!=X)) 
            
            {
                 printf("Player 1 can only use X, try again...\n");
                
            }

        }
        else 
        {
            printf("Reenter correct row and col value...\n");
        }

        }

}


_Bool checkState(struct BOARD board)
{

    // go rowwise 
    for (int i=0;i<ROWS;++i)
    {   
        int player1_iterator=0;
        int player2_iterator=0;

        for (int j=0;j<COLUMNS;++j)
        {
            if (board.board_value[i][j]==X)
            { 
                ++player1_iterator;

                if (player1_iterator==3)
                {
                    return GAME_OFF;
                } 
            
            }

            else if (board.board_value[j][i]==O)
            
            {

                ++player2_iterator;

                if (player2_iterator==3)
                {
                    return GAME_OFF;
                }


            }

        }
            

    }

    // go column wise 

    for (int i=0;i<ROWS;++i)
    {   
        int player1_iterator=0;
        int player2_iterator=0;


        for (int j=0;j<COLUMNS;++j)
        {
            if (board.board_value[j][i]==X)
                { 
                ++player1_iterator;

                if (player1_iterator==3)
                    {

                    return GAME_OFF;
                    }
                }
            else if (board.board_value[j][i]==O)
                {

                ++player2_iterator;

                if (player2_iterator==3)
                
                    {
                    return GAME_OFF;
                    }


                }

        }

    }



    //go left-ward diagonal wise 

    for (int i=0;i<ROWS;++i)
    {   
        int col_iter=2;
        int player1_iterator=0;
        int player2_iterator=0;


        if (board.board_value[i][i+col_iter]==X)

        { 
                ++player1_iterator;
                --col_iter;

                if (player1_iterator==3)
                {

                    return GAME_OFF;
                 } 
        }
            else if(board.board_value[i][i+col_iter]==O)
        {

                ++player2_iterator;
                --col_iter;

                if (player2_iterator==3)
            {

                    return GAME_OFF;
            }


        }

    }

    return GAME_ON;

}


void showBoard(struct BOARD board){

    printf("|%c|%c|%c|\n|_|_|_|\n|%c|%c|%c|\n|_|_|_|\n|%c|%c|%c|\n|_|_|_|\n\n",
    board.board_value[0][0],board.board_value[0][1],board.board_value[0][2],
    board.board_value[1][0],board.board_value[1][1],board.board_value[1][2],
    board.board_value[2][0],board.board_value[2][1],board.board_value[2][2]);

}


int main(){

    _Bool GAME_STATE; 

    int round=0;
    int player=PLAYER1;

       printf("Lets play some Tic-Tac-Toe...\n"); 

       while (GAME_STATE==GAME_ON)
    {
        GAME_STATE=ticTacToe(round, player, GAME_STATE, ticTacToeBoard);
        ++round;
    }

    return 0; 
}