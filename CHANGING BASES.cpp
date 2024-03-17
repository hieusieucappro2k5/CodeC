#include<stdio.h>
#include<string.h>
void daonguocchuoi(char a[]){
	int num=0;
	int k=strlen(a);
	for(int i=0,j=k-1;i<j;i++,j--){
			char temp=a[i];
			a[i]=a[j];
			a[j]=temp;	
	}
	
}
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		long long a,b;
		scanf("%d%d",&a,&b);
		if (a<=100000&&b>=2&&b<=36){
		long long num=0;
		char A[100000];
		while(a){
			long long k=a%b;
			if(k>=10&&k<36){
				A[num++]=k-10+'A';
			}
			else
			{
			A[num++]=k+'0';
	}
			a=a/b;
		}
	
		for(int i=num-1;i>=0;i--){
		printf("%c",A[i]);}
		printf("\n");}
	}return 0;
}