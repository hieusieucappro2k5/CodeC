#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
		int nam=n/365;
		n%=365;
		int tuan=n/7;
		n%=7;
		int ngay=n;
		printf("%d %d %d",nam,tuan,ngay);

}