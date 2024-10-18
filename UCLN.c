#include <stdio.h>
#include <conio.h>

void main(){
	int i, a, b, tam;
	
	printf("Nhap vao a va b: ");
	scanf("%d%d", &a, &b);
	
	if (a<b){
		tam = a;
		a = b;
		b = tam;
	}
	for (i = a; i >= 1; i--){
		if (a % i == 0 && b % i ==0){
			printf("UCLN la: %d\n", i);
			printf("BCNN la: %d", (a*b)/i);
			break;
		}
	}

}

