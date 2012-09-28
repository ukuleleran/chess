/*******************************************************************************
 * Filename:        game.h
 * Class:           Game
 * Created:         09.27.12
 * Description:     This file declares the Game class. This class is a
 *                  controller for all mechanics within the game model.
 ******************************************************************************/

#ifndef CHESS_GAME
#define CHESS_GAME

#include <string>
#include "Globals.h"
#include "Board.h"
#include "Player.h"

using namespace std;

class Game
{
    private:
        Board   board;
        Player  player[2];
        
    public:
        Game();
        Game(const Game& other);
        ~Game();
        Game& operator=(const Game& other);
        
        void    tick();
        string  encode();
        void    decode(string s);
};

#endif