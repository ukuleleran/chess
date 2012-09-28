/*******************************************************************************
 * Filename:        piece.h
 * Class:           Piece
 * Created:         09.27.12
 * Description:     This file declares the Piece class. This class is a model
 *                  for individual pieces in the game. It determines valid moves
 *                  and handles encoding and decoding of itself.
 ******************************************************************************/

#ifndef CHESS_PIECE
#define CHESS_PIECE

#include <string>
#include "Globals.h"

using namespace std;
 
class Piece
{
    private:
        bool    color;
        Type    type;
        
    public:
        Piece();
        Piece(const Piece& other);
        ~Piece();
        Piece& operator=(const Piece& other);
        
        vector<Move>    getMoves();
        bool            isValidMove();
        string          encode();
        void            decode(string s);
};

#endif