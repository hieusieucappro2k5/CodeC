//#include<stdio.h>
//#include<math.h>
//
//int a[1000001];
//
//void sangsonguyento()
//{
//	for(int i=0;i<=1000000;i++)
//	{
//		a[i]=1;
//	}
//	a[0]=a[1]=0;
//	for(int i=2;i<=1000;i++){
//		if(a[i]) 
//		{
//			for(int j=i*i;j<=1000000;j+=i)
//			{
//				a[j]=0;
//			}
//		}
//	}
//}
//
//int main(){
//	sangsonguyento();
//	int n;
//	scanf("%d",&n);
//	for(int i=0;i<=n;i++)
//		if(a[i]) printf("%d\n",i);
//	
//}
#include<stdio.h>

int prime(int n)
{
	for(int i=2;i*i<=n;i++)
		if(n%i==0) return 0;
	return n>1;	
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++) if(prime(i)) printf("%d\n",i);
}