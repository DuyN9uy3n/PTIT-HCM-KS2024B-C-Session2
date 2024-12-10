#include<stdio.h>
int main(){
	int a, b;
	printf("nhap gia tri cua bien a: ");
	scanf("%d", &a);
	
	printf("nhap gia tri cua bien b: ");
	scanf("%d", &b);
	
	int c = a + b;
	
	int d = a * b;
	
	float e = (float)a / b;
	
	
	printf("%d\n", c);
	printf("%d\n", d);
	printf("%f", e);
	
	return 0;
	
	
}