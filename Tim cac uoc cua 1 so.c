#include <stdio.h>
#include <conio.h>

void main(){
	int n, i;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++){
		if (n%i != 0)
			printf("Uoc cua n la: %d\n", i);

}
}
