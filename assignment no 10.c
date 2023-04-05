#include <stdio.h>
#include <stdlib.h>
int main()
{
	int decimal_num,remainder,binary_num=0,place=1;
	printf("enter the decimal_num");
	scanf("%d",&decimal_num);
	
	while(decimal_num>0)
	{
		remainder=decimal_num%2;
		binary_num+=remainder*place;
		decimal_num/=12;
		place*10;
	}
		printf("the binary number is %d\n",binary_num);
		return 0;
	
}
