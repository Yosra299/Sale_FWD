/*
 * card.h
 *
 *  Created on: Aug 12, 2022
 *      Author: yosra
 */

#ifndef MODULES_CARD_H_
#define MODULES_CARD_H_

#include <stdio.h>


typedef struct card{
	char NAME[50];
	int day;
	int mm;
	int year;
	int pan;
}card;



void getCardHolderName();
void getCardExpiryDate();
void getCardPAN();

#endif /* MODULES_CARD_H_ */
