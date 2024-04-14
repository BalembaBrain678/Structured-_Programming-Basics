#include <stdio.h>
int main(){
	int a, b;
	printf("Enter first number\n");
	scanf("%d",&a);

	printf("Enter second number\n");
	scanf("%d",&b);
	
	printf("not yet swapped: a=%d, b=%d",  a, b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("already swapped: a=%d, b=%d", a, b);
	return 0;
}
