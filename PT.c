#include<stdio.h>
#include<math.h>
void main()
{
    for (;;){
    float a, b, c, d;
    printf("Nhap he so a: ");
    scanf("%f", &a);
    
    if (a == 0){
    break;
    }
    else{
    d = b*b - 4*a*c;
    printf("Nhap he so b,c: ");
    scanf("%f%f", &b, &c);
    if (d == 0){
    printf("Phuong trinh co nghiem kep la: %f\n", -b/(2*a));
     }
    else if ( d>0 ){
         printf("Phuong trinh co nghiem la: %f\n", ((-b+sqrt(d))/(2*a)));
         printf("Phuong trinh co nghiem la: %f\n", ((-b+sqrt(d))/(2*a)));
   }
    else{
     printf("PT vo nghiem\n");
    }
}
}
}
