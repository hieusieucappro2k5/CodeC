#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	double delta=b*b-4*a*c;
	if(delta>0&&a>0){
		double x1=(-b+sqrt(delta))/(2*a);
		double x2=(-b-sqrt(delta))/(2*a);
		printf("%.2lf %.2lf",x1,x2);
	}
	else if(delta==0&&a>0) {
		double x=(double)-b/2*a;
		printf("%.2lf",x);
	}
	else if(delta<0&&a>0) printf("NO");
}