#include <stdio.h>
#include <conio.h>
void main(){
	int month, year;
	for (;;){
	printf("Nhap thang, nam:");
	scanf("%d%d", month, year);
	if (month > 12){
	switch (month){
		case 13:
		month = 1;
		year++;
		break;
		case 14:
		month = 2;
		year++;
		break;
		case 15:
		month = 1;
		year++;
		break;
		case 16:
		month = 1;
		year++;
		break;
		case 17:
		month = 1;
		year++;
		break;
	}
	
	}
}

}

