//program to calculate electricity bills
/*
author:George Mwalimu
Reg number:CT101/G/24310/24
*/


#include <stdio.h>
int main( ) {
	 int customerID;
	 char  customerName[ ]={ };
	 float unitConsumed;
	 float totalAmount;
	 float totalcharge;
	  printf("Enter your customerID: ");
	  scanf("%d",&customerID);
	  printf("The customerID is %d\n",customerID);
	  printf("enter your customerName: ");
	  scanf("%s",&customerName);
	  printf("the customer name is %s\n",customerName);
	  printf("Enter no.unitConsumed: ");
	  scanf("%f",&unitConsumed);
	  printf("the unit consumed is %f\n",unitConsumed);
	   
	   if(unitConsumed==0) {
	 totalcharge=0;}
	
	   else if(unitConsumed <=199) {
	   	totalcharge = 1.20;}
	
	   else if(unitConsumed>=200 && unitConsumed<400) {
	   	totalcharge =1.50;}
	   
	  else if (unitConsumed>=400 && unitConsumed<600) {totalcharge = 1.80;}
	
	 else if (unitConsumed>600) {totalcharge = 2.00;} 
	 
	 printf("the total charge is %f;\n",totalcharge);
	 
	 totalAmount=unitConsumed * totalcharge;
	 
	 if(totalAmount<100) {totalAmount=100;}
	 
     else if(totalAmount>400) {totalAmount= totalAmount*1.15;}
     
     else { printf("No surcharged fee\n");}
     
	   printf("totalAmount is %f\n",totalAmount);
	   
	   return 0;
	   }