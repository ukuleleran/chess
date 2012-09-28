/*******************************************************************************
 * Filename:        piece.h
 * Class:           Piece
 * Created:         09.27.12
 * Description:     This file declares the Piece class. This class is a model
 *                  for individual pieces in the game. It determines valid moves
 *                  and handles encoding and decoding of itself.
 ******************************************************************************/

#include <string>
#include "Globals.h"
 
class Piece
{
    private:
        bool    color;
        Type    type;
        
    public:
        Piece();
        Piece(const Piece& other)
        ~Piece();
        Piece& operator=(const Piece& other);
        
        vector<Move>    getMoves();
        bool            isValidMove();
        string          encode();
        void            decode(string s);
};