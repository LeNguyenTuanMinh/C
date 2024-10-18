#include <stdio.h>
#include <conio.h>
#include <math.h>
void main(){
	float a, b, c, S, p;
	
	printf("3 canh cua tam giac la: ");
	scanf("%f%f%f", &a, &b, &c);
	
	if (a+b>c && a+c>b && b+c>a){
		p = (a+b+c)/2;
		S = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("Dien tich tam giac la: %f", S);
		}
	else
	    printf("Khong phai tam giac");
	    

}

