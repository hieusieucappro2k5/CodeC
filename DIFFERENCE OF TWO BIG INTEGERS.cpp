#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int resver(char a[]){
	int k=strlen(a);
	for(int i=0,j=k-1;i<j;i++,j--){
		int temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}
void tru(char a[],char b[],char c[]){
	int k=strlen(a);
	int h=strlen(b);
	int minus;
	int cnt=0;
	int n=0;
	for(int i=0;i<k||i<h||n;i++){
		int dgit1=i<k?a[k-i-1]-'0':0;
		int dgit2=i<h?b[h-i-1]-'0':0;
		}
	c[cnt]='\0';
	resver(c);
}
int main(){
	char a[1000];
	scanf("%s",a);
	char b[1000];
	scanf("%s",b);
	char c[1000];
	tru(a,b,c);
	printf("%s",c);
	
}