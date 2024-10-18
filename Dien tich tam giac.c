#include <stdio.h>
#include <conio.h>
#include <math.h>
void main(){
	float a, b, c, p, S;
	
	printf("Nhap ba canh cua tam giac: ");
	scanf("%f%f%f", &a, &b, &c);
	
	p = (a+b+c)/2;
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("Dien tich tam giac la: %.2f", S);   

}

