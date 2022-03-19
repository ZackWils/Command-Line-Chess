#pragma once

#include <string>
#include "Piece.hpp"

class Board
{
private:
	struct square {
		std::string id = "";
		bool isBlack = false;
		Piece* pPiece = nullptr;

	};
	square squares[8][8];

public:
	Board();
	bool movePiece();
	bool validateMove();
};

