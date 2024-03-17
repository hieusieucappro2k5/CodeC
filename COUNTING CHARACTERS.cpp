#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main(){
	char A[10000];
	gets(A);
	int dem1=0,dem2=0,dem3=0;
	for(int i=0;i<strlen(A);i++){
		if(isalpha(A[i])){
			dem1++;
		}
		else if(isdigit(A[i])) dem2++;
		else dem3++;
	}
	printf("%d %d %d\n",dem1,dem2,dem3);
}