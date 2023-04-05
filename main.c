#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
int num,digit,sum=0;
printf("enter any number");
scanf("%d",&num);

for(;num!=10; num/=10)
{
	digit=num%10;
	sum +=digit;
	}
	
	printf("the sum of digits of the given number is %d\n",sum);
	
	return 0;
}
