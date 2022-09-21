/*
 * card.c
 *
 *  Created on: Aug 12, 2022
 *      Author: yosra
 */
#include "card.h"

card c1;

void getCardHolderName()
{
	printf("Enter Card Holder Name PlZ\n");
	scanf("%s",&c1.NAME);
}

void getCardExpiryDate()
{
	printf("Card Expiration Date is needed \nPlZ Enter day,month,year respectively\n");
	scanf("%d",&c1.day);
	if(c1.day<1 || c1.day>31){
		printf("Enter Valid Day PlZ\n");
		scanf("%d",&c1.day);
		printf("Enter Month then Year PlZ\n");
	}
	scanf("%d",&c1.mm);
	if(c1.mm<1 || c1.mm>12){
		printf("Enter Valid Month PlZ\n");
		scanf("%d",&c1.mm);
		printf("Enter Year PlZ\n");
		}
	scanf("%d",&c1.year);
}

void getCardPAN()
{
	printf("PlZ Enter Card Pan\n");
	scanf("%d",&c1.pan);
}
