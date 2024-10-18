#include <iostream>
//In giá tri cua N!?
using namespace std;
int main(){
	long double n,i,k=1;
	cout<<"Nhap gia tri cua n: ";
	cin>>n;
	for (i = 1; i<=n;i++){
		k=k*i;
	}
	cout<<"Gia tri cua n:"<<k;
}
