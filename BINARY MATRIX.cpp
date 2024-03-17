#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int A[1001][10];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=3;j++){
			scanf("%d",&A[i][j]);
		}
	}
	int cnt1=0;
	int cnt2=0;
	int cnt3=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=3;j++){
			if(A[i][j]==0) cnt1++;
			else if(A[i][j]==1) cnt2++; 
		}
		if (cnt1<cnt2&&cnt2!=0){
			cnt3++;
			cnt1=0;
			cnt2=0;
		}
		else {
			cnt1=0;
			cnt2=0;
		}
	}	
	printf("%d",cnt3);
}