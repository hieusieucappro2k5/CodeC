#include<stdio.h>
#include<string.h>

int firstlast(char a[])
{
	int l=a[0]-'0';
	int r=a[strlen(a)-1]-'0';
	if(l/r==2 || r/l==2) return 1;
	return 0;
}

int palidromic(char a[])
{
	for(int i=1,j=strlen(a)-2;i<j;i++,j--)
	{
		if(a[i]!=a[j])
		{
			return 0;
			break;
		}
	}
	return 1;
}

int main(){
	int test;
	scanf("%d",&test);
	while(test--)
	{
		char a[18];
		scanf("%s",a);
		if(firstlast(a)&&palidromic(a)) printf("YES\n");
		else printf("NO\n");
	}
}