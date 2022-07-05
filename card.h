#ifndef CARD_H
#define CARD_H
#include "Constant.h"
#include <stack>
#include <vector>
#include <algorithm>
#include <random>
#include <iterator>
/*******************************************************
 * Features of a card:
 *  1.Number
 *  2.Color
 *  3.Whether is valid (non-giving up)
 *  4.Whether is chameleon card
 * Operation of a card:
 *  1.Decide whether is valid
 *  2.Decide whether is a chameleon card
 *  3.Get the point of the card
 *  4.APIs to get private members
 *******************************************************/

class Card
{
public:
    Card(int num, Color c) : number(num), color(c) {};
    Card() = default;
    ~Card() = default;

    //APIs
    int get_number()const{return number;}
    Color get_color()const{return color;}
    bool get_ifdeploy(){return ifdeploy;}
    bool get_ifchame(){return ifchame;}

    //Decide whether is valid
    void set_ifdeploy(bool valid){ifdeploy = valid;}
    void set_ifchame(bool chame){ifchame = chame;}

    //Get point
    int get_point();

private:
    int number;
    Color color;
    bool ifdeploy = false;
    bool ifchame = false;
};

using Cardstack = std::stack<Card>;
void stack_init(Cardstack &stack);

#endif // CARD_H
