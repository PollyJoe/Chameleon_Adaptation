#ifndef PLAYER_H
#define PLAYER_H
#include "card.h"
/********************************************************************
 * Features of a player:
 *  1.Name
 *  2.Cards in hand
 *  3.Score
 *  4.Whether he is going to give up
 * Operations of a player:
 *  1.Give card
 *  2.
 ********************************************************************/
class Player
{
public:
    Player() = default;
    ~Player() = default;


private:
    std::vector<Card> cards_inhand;
    int score = 0;
    bool ifgiveup = false;
};

#endif // PLAYER_H
