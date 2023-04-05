#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num,reversed_num=0,remainder;
	printf("enter any number");
	scanf("%d",&num);
	while(num!=0)
	{
		remainder=num%10;
		reversed_num=reversed_num*10+remainder;
		num/=10;
	}
	printf("the reverse of %d is %d \n",num,reversed_num);
	return 0;
}
	
