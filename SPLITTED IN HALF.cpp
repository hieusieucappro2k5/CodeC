#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void chiadoi(char *a){
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='8') a[i]='0';
		else if(a[i]=='9') a[i]='0';
	}
}
int main(){
	int test;
	scanf("%d",&test);
	getchar();
	while(test--){
		char A[18];
		scanf("%s",A);
		chiadoi(A);
		int k=1;
		for(int i=0;i<strlen(A);i++){
			if (A[i]=='0'||A[i]=='1'||A[i]=='8'||A[i]=='9'){
				k=1;
			}
			else {
				k=0;
				break;
			}		
		}long long a=atoll(A);
			if (k==1){
				if (a==0) printf("INVALID\n");
				else printf("%lld\n",a);
			}
			else if(k==0) printf("INVALID\n");
	}
}