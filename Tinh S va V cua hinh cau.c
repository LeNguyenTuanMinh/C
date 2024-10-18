#include <stdio.h>
#include <conio.h>
#include <math.h>
#define pi 3.14
void main(){
	float R, V, S;
	
	printf("Nhap ban kinh cua hinh cau: ");
	scanf("%f", &R);
	
	S = 4*pi*pow(R, 2);
	V = (4/3)*pi*pow(R, 3);
	
	printf("Dien tich cua hinh cau la: %.2f\n", S);
	printf("The tich cua hinh cau la: %.2f", V);

}

