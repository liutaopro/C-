#include<iostream>
using namespace std;
int main()
{
	int sum=0,value=0;
	cout<<"请输入一组数据，按CTRL+Z表示结束输入"<<endl;
	while(cin>>value)
	{
		sum+=value;
	}
	cout<<"这些数的和是"<<sum;
	cout<<endl;
	return 0; 
}
