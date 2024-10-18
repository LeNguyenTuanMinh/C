#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	printf("Nhap n tu ban phim: ");

	scanf("%d",&n);
	double sum=0;
	for(int i=1;i<=n;i++){
		if(i%2==0) sum+=(double)1/i;
	}
	printf("Gia tri cua sum la: %.2f",sum);

}
