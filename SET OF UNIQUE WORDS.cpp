#include<stdio.h>
#include<string.h>
void swap(char a[],char b[]){
	char c[101];
	strcpy(c,a);
	strcpy(a,b);
	strcpy(b,c);
}
void sx(char a[][101],int n){
	for(int i=0;i<n;i++){
		int min = i;
		for(int j=i+1;j<n;j++){
			if(strcmp(a[min],a[j])>0) min=j;
		}
		swap(a[min], a[i]);
	}
}
int main(){
	char a[101];
	gets(a);
	char b[101];
	gets(b);
	char c[101][101];
	int num1=0;
	char d[101][101];
	int num2=0;
	char *token1=strtok(a," ");
	while(token1!=NULL){
		strcpy(c[num1],token1);
		++num1;
		token1=strtok(NULL," ");
	}
	char *token2=strtok(b," ");
	while(token2!= NULL){
		strcpy(d[num2],token2);
		++num2;
		token2=strtok(NULL," ");
	}
	int k=0;
	char check[101][101];
	for (int i=0;i<num1;i++){
		for(int j=0;j<num2;j++){
			if(strcmp(c[i],d[j])!=0) {
				if(j==num2-1) 
				strcpy(check[k++],c[i]);}
			else break;}
		}
//		printf("%s",check);	
		sx(check,k - 1);
		int e[101]={0};
		for(int i=0;i<k;i++){
			if(e[i]==0){
			for(int j=i+1;j<k;j++){
			if(strcmp(check[i],check[j])==0) e[j]=1;}
			printf("%s ",check[i]);
		}
		}
//	for(int i=0;i<k;i++){
//		printf("%s ",check[i]);
//	}
	}
