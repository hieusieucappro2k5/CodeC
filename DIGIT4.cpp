#include<stdio.h> 
#include<math.h> 
long long is_palindrome(long long n) {
  long long rev = 0;
  long long temp = n;
  while (temp) {
    rev = rev * 10 + temp % 10;
    temp /= 10;
  }

  return n == rev;
}

long long digit4(long long n){
	long long sum=0;
	int h=0;
	while(n>0){
		long long k=n%10;
		sum+=k;
		if(k==4 ) return 0;
		n/=10;
			}
		if(sum%10==0){
			return 1;
		} 
		else return 0;
	} 
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		long long n;
		scanf("%lld",&n);
		long long k=pow(10,n-1);
		long long h=pow(10,n); 
		for(int i=k;i<h;i++){
			if(is_palindrome(i)&&digit4(i)){
				printf("%d ",i);
			}
		}	printf("\n");
	}	
}
