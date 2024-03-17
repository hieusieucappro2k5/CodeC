#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
	char a[100];
	scanf("%s",a);
	for(int i=0;i<strlen(a);i++) a[i]=tolower(a[i]);
	for(int i=0;i<strlen(a);i++) 
	{
		int cnt=1;
		for(int j=i+1;j<strlen(a);j++)
		{
//			int cnt=1;
			if(a[i]!=a[j]) 
			{
				break;
			}
			else
			{
				cnt++;
				i++;
			}
		}
		printf("%c%d",a[i],cnt);
	}
}