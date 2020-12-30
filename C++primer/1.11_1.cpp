#include<iostream>
using namespace std;
int main()
{
	int a,b,i;
	cout<<"请输入两个整数"<<endl;
	cin>>a>>b;
	if(a<=b)//a<=b顺序输出 
	{
		for(i=a;i<=b;i++)
		cout<<i<<" ";
	}
	else
	{
		for(i=a;i>=b;i--)//a>b逆序输出 
		{
			cout<<i<<" ";
		}
	} 
	cout<<endl;
	return 0;
}
