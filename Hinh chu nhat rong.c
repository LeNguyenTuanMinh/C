#include <stdio.h>
#include <conio.h>

void main(){
	int i,j,m = 10,n = 10;

	
	for (i = 1; i <= n; i ++){
		if (i==1 || i == n){
			for (j = 1; j <= m; j++){
				printf("*");
				if (j == 1 || j == m){
					for (i = 1; i <= n; i ++)
					printf("*\n");
				}
				}
		printf("\n");
		}
		}
	}



