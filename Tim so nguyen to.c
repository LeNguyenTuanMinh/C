#include <stdio.h>
#include <conio.h>
#include<math.h>
void main(){
	long long i,n;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	for (i = 2;i < sqrt(n) ;i++){
		if ( n%i == 0){
			printf("%d khong phai la so nguyen to", n);
			break;
		}
		else
		printf("%d la so nguyen to", n);
		break;
}

}

