#include<stdio.h>
#include<string.h>

int coso3(char a[])
{
	for(int i=0;i<strlen(a);i++){
		if(a[i]!='0'&&a[i]!='1'&&a[i]!='2') 
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
	getchar();
	while(test--){
		char a[18];
		scanf("%s",a);
		if(coso3(a)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}