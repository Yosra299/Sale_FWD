/*
 * terminal.h
 *
 *  Created on: Aug 12, 2022
 *      Author: yosra
 */

#ifndef MODULES_TERMINAL_H_
#define MODULES_TERMINAL_H_

#include <stdio.h>
#include <stdlib.h>
#include "card.h"

typedef struct TransactionDate{
	int day;
	int mm;
	int year;
}TransactionDate;

typedef enum isvalid{
	expried,valid
}isvalid;

isvalid getTransactionDate();
void isCardExpried();
void gatTransactionAmount();
void isBelowMaxAmount();
void setMaxAmount();

#endif /* MODULES_TERMINAL_H_ */
