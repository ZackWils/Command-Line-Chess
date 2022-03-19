#include "Board.hpp"

Board::Board()
{
	//populate board with squares
	for (int x = 1; x <= 8; x++)
	{
		for (int y = 1; y <= 8; y++)
		{
			square s = { std::to_string((char)(96 + x) + y), };
			this->squares[x][y] = s;
		}
	}
}

bool Board::movePiece()
{
	return false;
}

bool Board::validateMove()
{
	return false;
}
