#include<stdio.h>
int palindrome(int n) {
  int rev = 0;
  int temp = n;

  while (temp) {
    rev = rev * 10 + temp % 10;
    temp /= 10;
  }

  return n == rev;
}
int chuso(int n){
	while(n){
		int k=n%10;
		if(k==9) return 0;
		n/=10; 
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	int cnt=0;
	for(int i=2;i<n;i++){
		if(chuso(i)&&palindrome(i)){
			printf("%d ",i);
			cnt++;
		}
	}printf("\n");
	printf("%d",cnt);
}
