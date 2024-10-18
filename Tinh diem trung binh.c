#include <stdio.h>
#include <conio.h>

void main(){
	float m, p, c, a;
	
	printf("Nhap diem toan ly hoa cua hoc sinh:");
	scanf("%f%f%f", &m, &p, &c);
	
	a = (m+p+c)/3;
	printf("Diem trung binh cua hoc sinh la: %.2f", a);
	
}

