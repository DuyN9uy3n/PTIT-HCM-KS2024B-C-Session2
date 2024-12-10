#include <stdio.h>

int main() 
{
    float a, b, chuVi, dienTich;

    printf("Nhap do dai canh a: ", a);
    scanf("%f", &a);
    
    printf("Nhap do dai canh b: ", b);
    scanf("%f", &b);


	dienTich = a * b;
	
    chuVi = (a + b) * 2;

	printf("Dien tich: %.0f\n", dienTich);
    printf("Chu vi: %.0f\n", chuVi);

    return 0;
}