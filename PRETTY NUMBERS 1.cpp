#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char palindromic(char *n){
	for(int i=0;i<strlen(n)/2;i++){
		int j=strlen(n)-1;
			if(n[i]==n[j]){
				j--; return 1; 
			}
			else {
				return 0;
				break;
			}
		
	}
}
char sochan(char *n){
	for(int i=0;i<strlen(n);i++){
		if(n[i]=='2'||n[i]=='4'||n[i]=='6'||n[i]=='8'||n[i]=='0') return 1;
		else return 0;
	}
}
int main(){
	int test;
	scanf("%d",&test);
	getchar();	
	while(test--){
		char A[500];
		gets(A);
		if (palindromic(A)&&sochan(A)) printf("YES\n");
		else printf("NO\n");
		
	}
	
}