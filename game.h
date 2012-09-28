/*******************************************************************************
 * Filename:        game.h
 * Class:           Game
 * Created:         09.27.12
 * Description:     This file declares the Game class. This class is a
 *                  controller for all mechanics within the game model.
 ******************************************************************************/
 
#include "Globals.h"
#include "Board.h"
 
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