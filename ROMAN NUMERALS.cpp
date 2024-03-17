#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//bool check(char a[]){
//	int k=strlen(a);
//	for(int i=0;i<k;i++){
//		if(a[i]=='I'){
//			if(a[i+1]=='V'||a[i+1]=='X') return true;
//			else if (i+1==k) return true; 
//			else return false;
//		}
//		if(a[i]=='X'){
//			if(a[i+1]=='L'||a[i+1]=='C') return true;
//			else if (i+1==k) return true; 
//			else if(a[i+2]=='X') return true;
//			else return false;
//		}
//		if(a[i]=='C'){
//			if(a[i+1]=='D'||a[i+1]=='M') return true;
//			else if (i+1==k) return true; 
//			else return false;
//		}
//	}
//	return true;
//} 
int main(){
	int test=0;
	scanf("%d",&test);
	getchar();
	while(test--){
		char A[1001];
		gets(A);
		int B[1001]={0};
		int k=strlen(A);
		for(int i=0;i<strlen(A);i++){
			if(A[i]=='I') B[i]= 1;
			else if(A[i]=='V') B[i]= 5;
			else if(A[i]=='X') B[i]= 10;
			else if(A[i]=='L') B[i]= 50;
			else if(A[i]=='C') B[i]= 100;
			else if(A[i]=='D') B[i]= 500;
			else if(A[i]=='M') B[i]= 1000;
		}
		int sum=0;
//		if(check(A)){
			for(int i=0;i<k;i++){
				if (B[i]>=B[i+1]){
				sum+=B[i];	
				}
				else
				sum-=B[i];
			}
//		}
		printf("%d\n",sum);
		
		
		
	}
}