#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char a[1000];
		scanf("%s",a);
		int b[10]={0};
		if(a[0]=='0') printf("INVALID\n");
		else
		{
			int k=1;
			for(int i=0;i<strlen(a);i++)
			{	
				if(a[i]<'0'||a[i]>'9') 
				{
					printf("INVALID\n");
					k=0;
					break;
				}
				else if(a[i]>='0'&&a[i]<='9')
				{
					b[a[i]-'0']++;
				}
			}
			if(k)
			{
				for(int i=0;i<1;i++)
				{
					int ok=1;
					for(int j=0;j<10;j++)
					{
						if(b[j]==0) ok=0; break;
					}
					if(ok) printf("YES\n");
					else printf("NO\n");
				}
			}
		}
	}
}
