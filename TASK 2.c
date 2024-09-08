#include <stdio.h>
main() 
{
	
	int a,b, temp;
  	printf("Enter First Integer");
	scanf("%d",&a);
	
	printf("Enter Second Integer");
	scanf("%d",&b);
	
	temp=a;
	a=b;
	b=temp;
	printf("the value of a after swapping is:%d\n",a);
	printf("the value of b after swapping is:%d\n",b);
	return a,b;
}