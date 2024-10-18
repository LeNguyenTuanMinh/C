#include <stdio.h>
#include <conio.h>

void main(){
	int  i, n;
	float sum=0;
	printf("Nhap n tu ban phim: ");
	scanf("%d", &n);
	for (i=1; i<=n; i++){
		if ( i % 2 == 0 ) {
		sum = sum + (1.0/i);
		}
	}
	printf("Gia tri cua sum la: %.2f",sum);

}

