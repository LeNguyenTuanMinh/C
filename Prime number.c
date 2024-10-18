#include <stdio.h>
#include <conio.h>

void main(){
	long long i,n;
	
	n = 999999999999999937;
	
	for (i = 2;i < sqrt(n) ;i++){
		if ( n%i == 0){
			printf("%lld khong phai la so nguyen to", n);
			break;
		}
		else
		  printf("%lld la so nguyen to", n);
		break;
}

}

