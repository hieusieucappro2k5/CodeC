#include<stdio.h>
#include<string.h>
int main(){
	char a[9];
	scanf("%s",a);
	int k=strlen(a);
	int temp=a[0]; 
		
	a[0]=a[k-1];
	a[k-1]=temp;
	if(a[0]=='0') {
		for(int i=1;i<k;i++){
			printf("%c",a[i]);
		}}
	else printf("%s",a);
	
}