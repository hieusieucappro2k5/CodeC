#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void resven(char *a)
{
	int k=strlen(a);
	for(int i=0,j=k-1;i<j;i++,j--)
	{
		int temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}

void tachso(char a[],char b[])
{
	int k=strlen(a);
	int n=0,num=0;
	if(k%2==0)
	{
		for(int i=k/2-1,j=k-1;i>=0||j>=k/2||n;i--,j--)
		{
			int l=i>=0?a[i]-'0':0;
			int r=j>=k/2?a[j]-'0':0;
			int sum=l+r+n;
			b[num++]=sum%10+'0';
			n=sum/10;
		}
	}
	else
	{
		for(int i=k/2-1,j=k-1;i>=0||j>=k/2||n;i--,j--)
		{
			int l=i>=0?a[i]-'0':0;
			int r=j>=k/2?a[j]-'0':0;
			int sum=l+r+n;
			b[num++]=sum%10+'0';
			n=sum/10;
		}
	}
	b[num]='\0';
	resven(b);
	printf("%s\n",b);
}

int main(){
	char a[200];
	gets(a);
	char b[200];
	while(strlen(a)!=1){
		tachso(a,b);
		strcpy(a,b);
	}	
}