#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void catdoi(char *n)
{
	for(int i=0;i<strlen(n);i++)
	{
		if(n[i]=='8') n[i]='0';
		else if(n[i]=='9') n[i]='0';
	}
}

int main(){
	int test;
	scanf("%d",&test);
	getchar();
	while(test--){
		char n[18];
		scanf("%s",n);
		int k=1;
		for(int i=0;i<strlen(n);i++){
			if(n[i]=='2'||n[i]=='3'||n[i]=='4'||n[i]=='5'||n[i]=='6'||n[i]=='7'){
				printf("INVALID\n");
				k=0;
				break;
			}
		}
		if(k==1){
		catdoi(n);		
		long long kq=atoll(n);	
		if(kq==0) printf("INVALID\n");	
		else printf("%lld\n",kq);
		}
		
	}
	return 0;
}