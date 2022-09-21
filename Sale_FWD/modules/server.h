/*
 * server.h
 *
 *  Created on: Aug 12, 2022
 *      Author: yosra
 */

#ifndef MODULES_SERVER_H_
#define MODULES_SERVER_H_

#include <stdio.h>
#include <stdlib.h>
#include "terminal.h"

void recieveTransactionData();
void isValidAccount();
void isAmountAvailable();
void  saveTransaction();

#endif /* MODULES_SERVER_H_ */
