#include<iostream>
using namespace std;
int main()
{
	int a,b,tempt,i;
	cout<<"��������������"<<endl;
	cin>>a>>b;
	if(b<a)
	{
	tempt=b;
	b=a;
	a=tempt;
	}
	for(i=a;i<=b;i++)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
