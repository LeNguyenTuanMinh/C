#include <stdio.h>
#include <conio.h>

void main(){
	int a, b, c, max;
	printf("Nhap vao gia tri a, b, c:");
	scanf("%d%d%d", &a, &b, &c);
	
	if (a>b){
		if (a>c){
			max = a;
		}
		else{
			max = c;
		}
}
	else{
		if (b>c){
			max = b;
		}
		else {
			max = c;
		}
	}
	printf("Gia tri lon nhat la: %d", max);
	}

