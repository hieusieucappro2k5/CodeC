#include<stdio.h>
#include<string.h>

int sokhonggiam(char a[])
{
	int k=strlen(a);
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
		if(sokhonggiam(a)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}