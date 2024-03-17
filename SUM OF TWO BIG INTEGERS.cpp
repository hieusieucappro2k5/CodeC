#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void reverse(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}
char tong(char *a,char *b,char *kq){
	int sum=0;
	int n=0,cnt=0;
	int l=strlen(a);
	int r=strlen(b);
	for(int i=0;i<l||i<r||n;i++){
		int digit_a=i<l?a[l-i-1]-'0':0;
		int digit_b=i<r?b[r-i-1]-'0':0;
		int sum=digit_a+digit_b+n;
		n=sum/10;
		kq[cnt++]=sum%10+'0';
	}
	kq[cnt]='\0';
	reverse(kq);
}
int main(){
	int test;
	scanf("%d",&test);
	getchar();
	while(test--){
		char a[500],b[500],kq[1000];
		gets(a);
		gets(b);
		tong(a,b,kq);
		printf("%s\n",kq);
	}
}