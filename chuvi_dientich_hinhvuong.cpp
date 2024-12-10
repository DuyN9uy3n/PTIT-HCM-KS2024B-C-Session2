#include <stdio.h>

int main() 
{
    float a, chuVi, dienTich;

    printf("Nhap do dai canh a: ", a);
    scanf("%f", &a);


	dienTich = a * a;
	
    chuVi = a * 4;

	printf("Dien tich: %.0f\n", dienTich);
    printf("Chu vi: %.0f\n", chuVi);

    return 0;
}