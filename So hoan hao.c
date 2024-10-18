#include <stdio.h>
#include <conio.h>

void main(){
	int i,n,sum=0;
	
	printf("Nhap so n:");
	scanf("%d", &n);
	for (i = 1; i < n; i++){
		if (n%i == 0){
			sum = sum +i;

}
}
    if ( sum == n){
    	printf("So %d la so hoan hao", n);
}
    else {
    	printf("Ko phai so hoan hao");
}
}
