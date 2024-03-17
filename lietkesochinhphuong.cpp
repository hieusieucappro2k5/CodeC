#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int cnt=0;
	if((int)sqrt(a)*(int)sqrt(a)==a){
		for(int i=sqrt(a);i<=sqrt(b);i++) cnt++;
		printf("%d\n",cnt);
		for(int i=sqrt(a);i<=sqrt(b);i++){
			if(i==(int) i) printf("%d\n",i*i);
		}
	}
	else {
		for(int i=sqrt(a)+1;i<=sqrt(b);i++) cnt++;
		printf("%d\n",cnt);
		for(int i=sqrt(a)+1;i<=sqrt(b);i++){
			if(i==(int)i) printf("%d\n",i*i);
		}
	}
	
}