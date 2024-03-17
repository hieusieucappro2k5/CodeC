#include<stdio.h>
#include<string.h>

int pali(char a[]){
	int l=strlen(a)-1;
	for(int i=0,j=l;i<j;i++,j--){
		if(a[i]!=a[j]) return 0;
	}
	return 1;
}

int sochan(char a[]){
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='1'||a[i]=='3'||a[i]=='5'||a[i]=='7'||a[i]=='9') return 0;
	}
	return 1;
}
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		char a[500];
		scanf("%s",a);
		if(sochan(a)&&pali(a)) printf("YES\n");
		else printf("NO\n");
	}
}