#include <stdio.h>
#include <conio.h>

void main(){
	int a, b, C, S;
	
	printf("Nhap vao chieu dai HCN: ");
	scanf("%d", &a);
	printf("Nhap vao chieu rong HCN: ");
	scanf("%d", &b);

	C = (a+b)*2;
	S = a*b;

	printf("Chu vi cua HCN la: %d\n", C);
	printf("Dien tich cua HCN la: %d", S);
}

