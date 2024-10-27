// do while
/*
name:George Mwalimu
reg number:CT101/G/24310/24
*/
#include <stdio.h>
int main() {
	int start,stop,sum=0;
	
	printf("enter start:");
	scanf("%d", &start);
	printf("enter to stop:");
	scanf("%d", &stop);
	 do {
	 	printf("%d\n",start);
	 	sum=sum+start;
	 	sum+=start;
	 	start++;
	 }
	 while(start,start<=stop);
	 printf("the sum%d",sum);
	 
	 return 0;
	 
	
}