#include<stdio.h>
#include<string.h>

int tangdan(char a[])
{
	for(int i=0;i<strlen(a)-1;i++)
	{
		if(a[i]>a[i+1]) return 0;
	}
	return 1;
}


int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char a[18];
		scanf("%s",a);
		if(tangdan(a)) printf("YES\n");
		else printf("NO\n");
	}
}