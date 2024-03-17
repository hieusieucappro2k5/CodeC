#include<stdio.h>
#include<string.h>
int main(){
	int test;
	scanf("%d",&test);
	getchar();
	while(test--){
		char a[101];
		gets(a);
		int k=1,num=0;
		int count[256]={0};
		char b[10000];
		for(int i=0;i<strlen(a);i++){
			if(a[i]>='A'&&a[i]<='Z'){
			count[a[i]]++;
			if (a[i]!=a[i+1]){
				b[num]=a[i];
				num++;
				b[num]=count[a[i]]+'0';
				num++;
				count[a[i]]=0;
			}}
		}
		
		for(int i=0;i<num;i++){
			printf("%c",b[i]);
			
		}
		printf("\n");
		
	}
}