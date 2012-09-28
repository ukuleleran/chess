/*******************************************************************************
 * Filename:        player.h
 * Class:           Player
 * Created:         09.27.12
 * Description:     This file declares the Player class. This class handles
 *                  user input or AI to choose moves based on the current board
 *                  status.
 ******************************************************************************/
 
#ifndef CHESS_PLAYER
#define CHESS_PLAYER
 
#include "Board.h"
#include "Globals.h"
 
class Player
{
    private:
        bool    color;
        
    public:
        Player();
        Player(const Player& other);
        ~Player();
        Player& operator=(const Player& other);
        
        const Move&     move(const Board& board) const;
};

#endif