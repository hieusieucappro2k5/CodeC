#include<bits/stdc++.h>

using namespace std;

string hieu(string x,string y,string res) {
	
	int num=0;
	int nho=0;
	if(x.size()>y.size()) y.insert(0,x.size()-y.size(),'0');
	else if(x.size()<y.size()) x.insert(0,y.size()-x.size(),'0');
	int l=x.size();
	if(x<y)
	{
		string c=x;
		x=y;
		y=c;
	}
	for(int i=l-1;i>=0; i--) {
		int tmp=x[i]-y[i]-nho;
		if (tmp<0) 
		{
			tmp+=10;
			nho=1;
		}
		else 
		{
			nho=0;
		}
		res.push_back(tmp%10+'0');
	}
//	res.push_back('\0');
	reverse(res.begin(),res.end());
	return res;
}

//void xoaso0(string res)
//{
//	int l=res.size();
//	int index=0;
//	for(int i=0;i<l;i++)
//	{
//		if(res[i]!='0')
//		{
////			cout<<res[i]<<endl;
//			index=i;
////			cout<<index<<endl;
//			break;
//		}
//	}
//	
//	for(int i=index;i<l;i++)
//		cout<<res[i];
//
//}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--) {
		string x,y,res;
		cin>>x>>y;
		res=hieu(x,y,res);
//			xoaso0(res);
//			xoaso0(res);
		cout<<res<<endl;
	}
}