#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of A and B : ");
	scanf("%d%d",&a,&b);
	float sum =a+b;
	printf("Addition of two numbers is %.0f\n",sum);
	int sub=a-b;
	printf("Subtraction of two numbers is %d\n",sub);
	int mul=a*b;
	printf("Multiplication of two numbers %d\n",mul);
	int div=a/b;
	printf("Division of two nuumbers is %d\n",div);
	return 0;
	
}
