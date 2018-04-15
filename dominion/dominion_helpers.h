#ifndef _DOMINION_HELPERS_H
#define _DOMINION_HELPERS_H

#include "dominion.h"

int drawCard(int player, struct gameState *state);
int updateCoins(int player, struct gameState *state, int bonus);
int discardCard(int handPos, int currentPlayer, struct gameState *state,
		int trashFlag);
int gainCard(int supplyPos, struct gameState *state, int toFlag, int player);
int getCost(int cardNumber);
int cardEffect(int card, int choice1, int choice2, int choice3,
	       struct gameState *state, int handPos, int *bonus);
//Separated card functions
int ambassadorCard(int card, int choice1, int choice2, int choice3, struct gameState *state, int handPos, int *bonus);
int feastCard(int card, int choice1, int choice2, int choice3, struct gameState *state, int handPos, int *bonus);
int adventurerCard(int card, int choice1, int choice2, int choice3, struct gameState *state, int handPos, int *bonus);
int smithyCard(int card, int choice1, int choice2, int choice3, struct gameState *state, int handPos, int *bonus);
int salvagerCard(int card, int choice1, int choice2, int choice3, struct gameState *state, int handPos, int *bonus);


#endif
