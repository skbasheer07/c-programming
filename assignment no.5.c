#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
int amount,notes_500,notes_100,notes_50,notes_20,notes_10,notes_5,notes_2,notes_1;
printf("enter the amount");
scanf("%d",&amount);
 notes_500=amount/500;
 amount=amount%500;
 
 notes_100=amount/100;
 amount=amount%100;
 
 notes_50=amount/50;
 amount=amount%50;
 
 notes_20=amount/20;
 amount=amount%20;
 
 notes_10=amount/10;
 amount=amount%10;
 
 notes_5=amount/5;
 amount=amount%5;
 
 notes_2=amount/2;
 amount=amount%2;
 
 printf("minimum number of notes : \n");
 printf("Rs 500=%d \n",notes_500);
 printf("Rs 100=%d \n",notes_100);
 printf("Rs 50=%d \n",notes_50);
 printf("Rs 20=%d \n",notes_20);
 printf("Rs 10=%d \n",notes_10);
 printf("Rs 5=%d \n",notes_5);
 printf("Rs 2=%d",notes_2);
 printf("Rs 1+%d",notes_1);

	return 0;
}
