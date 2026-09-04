#include <stdio.h>
void STATIC(){
	static int b=5;
	printf("%d",b);
	b=b+10;
	printf("\n%d",b);;
	b=b+5;
	printf("\n%d",b);
	if(b>15)
		printf("\nFalse");
}
void CONST(){
	const int b=10;
	printf("\n%d",b);
	/*b+=1 raises error*/
}
int main(){
	STATIC();
	CONST();
}
