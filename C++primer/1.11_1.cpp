#include<iostream>
using namespace std;
int main()
{
	int a,b,i;
	cout<<"��������������"<<endl;
	cin>>a>>b;
	if(a<=b)//a<=b˳����� 
	{
		for(i=a;i<=b;i++)
		cout<<i<<" ";
	}
	else
	{
		for(i=a;i>=b;i--)//a>b������� 
		{
			cout<<i<<" ";
		}
	} 
	cout<<endl;
	return 0;
}
