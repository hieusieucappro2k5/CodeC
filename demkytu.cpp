#include<stdio.h>
#include<string.h>

int main(){
	char a[1000];
	gets(a);
	int cnt1=0,cnt2=0,cnt3=0;
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z'){
			cnt1++;
		}
		else if(a[i]>='0'&&a[i]<='9') cnt2++;
		else cnt3++;
	}
	printf("%d %d %d",cnt1,cnt2,cnt3);
}