#pragma once

#include "Common.h"
#include "Player.h"

namespace SparCraft
{

class Player_Script : public Player
{
public:
	Player_Script (const IDType & playerID);
	void getMoves(GameState & state, std::vector<Action> & moveVec);
	virtual PlayerPtr clone();
};
}