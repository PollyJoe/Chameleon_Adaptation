#ifndef CONSTANT_H
#define CONSTANT_H

/*****************************************************
 * List of constant:
 *  1.Color: Heart, Spade, Club, Diamond
 *  2.Number of color: 4
 *  3.A set: 13 cards
 *  4.Whole stack: 52 cards, 4 colors
 *  5.Players: 2
 *  6.Offense: 0
 *  7.Defense: 1
 *  8.Maximum amount of cards in hand: 5
 *  9.Mode: human-human, human-machine, machine-machine
 ********************************************************/

enum Color{ heart, diamond, spade, club };
enum Mode{ hh, hm, mm };
const int stack_size = 52;
const int suit_size = 13;
const int color_num = 4;
const int player_num = 2;
const int offense = 0;
const int defense = 1;
const int max_inhand = 5;

#endif // CONSTANT_H
