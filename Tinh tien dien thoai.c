#include <stdio.h>
#include <conio.h>

void main(){
	int t, b;

	printf("Thoi gian dien thoai: ");
	scanf("%d", &t);

	if (t<=10){
		b = 25000 + t*600;
	}
	else if (t>=10 && t <= 60){
		b = 25000 + 10*600 + (t-10)*400;
	}
	else{
		b = 25000 + 10*600 + 50*400 + (t-60)*200;
	}
	printf("So tien can phai tra la: %d", b);

}

