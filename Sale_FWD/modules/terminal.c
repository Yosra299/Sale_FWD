/*
 * terminal.c
 *
 *  Created on: Aug 12, 2022
 *      Author: yosra
 */
#include "terminal.h"

extern card c1;

TransactionDate t1;
int TransactionAmount;
int MaxAmount;
isvalid getTransactionDate()
{

	printf("Enter Transaction Date PlZ\nEnter year,month,day respectively\n");
	scanf("%d",&t1.year);
	if(t1.year > c1.year)
		return expried;
	scanf("%d",&t1.mm);
	if(t1.year == c1.year && t1.mm > c1.mm)
		return expried;
	scanf("%d",&t1.day);
	if(t1.year == c1.year && t1.mm == c1.mm && t1.day > c1.day)
		return expried;
	return valid;
}

void isCardExpried()
{
	isvalid v;
	v = getTransactionDate();
	if(v == expried)
		{
			printf("Card Is Expired\n");
			exit(0);
		}

	else
			printf("Card Is Valid\n");
}

void gatTransactionAmount()
{
	printf("PlZ Enter Transaction Amount\n");
	scanf("%d", &TransactionAmount);
}

void setMaxAmount()
{
	MaxAmount = 5000;
}

void isBelowMaxAmount()
{
	if(TransactionAmount > MaxAmount)
	{
		printf("Amount exceeding limit\n");
		exit(0);
	}
	else printf("PlZ Wait...");
}
























