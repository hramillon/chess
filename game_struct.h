typedef enum{
    PAWN,
    BISHOP,
    KNIGHT,
    ROOK,
    QUEEN,
    KING
}pieces;

typedef struct 
{
    pieces name;
    int moveTop;
    int moveVerticaly;
    int positionX;
    int positionY;
    bool king;
    bool headback;
}piece;

typedef struct
{
    piece* alivePieces;
}player;


typedef struct
{
    player player1;
    player player2;
}game;

