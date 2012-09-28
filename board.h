/*******************************************************************************
 * Filename:        board.h
 * Class:           Board
 * Created:         09.27.12
 * Description:     This file declares the Board class. This class is a
 *                  container for game pieces and handles encoding and
 *                  decoding scenes in the game.
 ******************************************************************************/
 
#include <vector>
#include <string>
#include "Globals.h"
#include "Piece.h"
 
class Board
{
    private:
        vector<Piece>   piece;
        
    public:
        Board();
        Board(const Board& other);
        ~Board();
        Board& operator=(const Board& other);
        
        bool    hasWinner();
        int     numPieces();
        string  encode();
        void    decode(string s);
};