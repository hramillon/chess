#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "game.h"
#include "game_struct.h"

/****** AUXILIARY FUNCTIONS ******/

int* move(pieces type){
    int tab[2];
    switch (type)
    {
    case PAWN:
        /* code */
        break;
    
    case BISHOP:
        /* code */
        break;
    
    case KNIGHT:
        /* code */
        break;
    
    case ROOK:
        /* code */
        break;
    
    case QUEEN:
        /* code */
        break;

    case KING:
        /* code */
        break;
    }
}

piece* allocatepiece(pieces type,int x, int y){
    piece* newPiece = (piece *)malloc(sizeof(piece));

    if (newPiece == NULL)
    {
        free(newPiece);
        fprintf(stderr,"allocation memory \n");
        exit(EXIT_FAILURE);
    }

    newPiece->positionX = x;
    newPiece->positionY = y;
    newPiece->name = type;

    newPiece->king = type == KING ? true : false;
    newPiece->king = type == PAWN ? true : false;
    
    

}

/****** MAIN FUNCTIONS ******/

game* create_game(){

}